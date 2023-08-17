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
		string s;
		cin >> s;
		ll ctr = 1;
		if (n == 1) {
			cout << s;
		}
		for (int i = 1; i < n; i++) {
			if (s[i] != s[i - 1]) {
				if (ctr & 1) {
					cout << s[i - 1];
				}
				else {
					cout << s[i - 1] << s[i - 2];
				}
				if (i == n - 1) {
					cout << s[i];
				}
				ctr = 1;
			}
			else {
				ctr++;
				if (i == n - 1) {
					if (ctr & 1) {
						cout << s[i];
					}
					else {
						cout << s[i - 1] << s[i];
					}
				}

			}
		}
		cout << endl;
	}


	return 0;
}