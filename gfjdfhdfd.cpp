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
		vi a, b;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		map<int, int> mp1, mp2;
		if (n == 1) {
			if (a[0] != b[0]) {
				cout << 1 << endl;
			}
			else {
				cout << 2 << endl;
			}
		}
		else {
			ll ctr = 1;
			for (int i = 1; i < n; i++) {
				if (a[i] == a[i - 1]) {
					ctr++;
					if ((i == n - 1) && (mp1[a[i]] < ctr)) {
						mp1[a[i]] = ctr;
					}
				}
				else {
					if (mp1[a[i - 1]] < ctr) {
						mp1[a[i - 1]] = ctr;
					}
					ctr = 1;
					if ((i == n - 1) && (mp1[a[i]] < ctr)) {
						mp1[a[i]] = ctr;
					}
				}
			}
			ctr = 1;
			for (int i = 1; i < n; i++) {
				if (b[i] == b[i - 1]) {
					ctr++;
					if ((i == n - 1) && (mp2[b[i]] < ctr)) {
						mp2[b[i]] = ctr;
					}
				}
				else {
					if (mp2[b[i - 1]] < ctr) {
						mp2[b[i - 1]] = ctr;
					}
					ctr = 1;
					if ((i == n - 1) && (mp2[b[i]] < ctr)) {
						mp2[b[i]] = ctr;
					}
				}
			}
			ll res = 0;
			for (auto x : mp1) {
				ll sum = mp1[x.ff] + mp2[x.ff];
				res = max(res, sum);
			}
			for (auto x : mp2) {
				ll sum = mp1[x.ff] + mp2[x.ff];
				res = max(res, sum);
			}
			cout << res << endl;
		}
	}


	return 0;
}