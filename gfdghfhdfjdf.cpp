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
		ll n, k;
		cin >> n >> k;
		map<char, ll> fq;
		vector<string> a, b;
		for (int i = 0; i < n; i++) {
			string x;
			cin >> x;
			for (int j = 0; j < x.size(); j++) {
				fq[x[j]]++;
			}
			a.pb(x);
		}
		for (int i = 0; i < n; i++) {
			string x;
			cin >> x;
			b.pb(x);
		}
		bool chk = true;
		ll cost = 0;
		for (int i = 0; i < n; i++) {
			ll s1 = a[i].size(), s2 = b[i].size();
			if (s1 != s2) {
				chk = false;
				break;
			}
			else {
				for (int j = 0; j < s1; j++) {
					if (fq[b[i][j]] == 0) {
						cost++;
					}
					else {
						fq[b[i][j]]--;
					}
				}
			}
		}
		if (chk) {
			if (cost <= k) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}