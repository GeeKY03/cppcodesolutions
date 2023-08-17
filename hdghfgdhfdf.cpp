#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<string> arr;
		string s1, s2;
		bool chk = false;
		for (int i = 0; i < 2 * (n - 1); i++) {
			string x;
			cin >> x;
			if (x.size() == n - 1) {
				if (chk == false) {
					s1 = x;
					chk = true;
				}
				else {
					s2 = x;
				}
			}
			arr.pb(x);
		}
		string res;
		// cout << s1 << " " << s2 << endl;
		bool sufchk = true;
		string temp;
		// let's assume s1 is prefix
		for (int i = 1; i < n - 1; i++) {
			temp += s1[i];
		}
		for (int i = 0; i < n - 2; i++) {
			if (temp[i] != s2[i]) {
				sufchk = false;
			}
		}
		if (sufchk) {
			res += s1 + s2[n - 2];
		}
		else {
			res += s2 + s1[n - 2];
		}
		// cout << res << endl;
		string tp = res;
		reverse(all(res));
		if (tp == res) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}


	return 0;
}