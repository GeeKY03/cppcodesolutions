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
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll res = 0;
		ll sgl = 0, dbl = 0, emt = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 1) {
				if (emt > 0) {
					emt--;
					sgl++;
				}
				else {
					sgl++;
				}
			}
			else {
				if (sgl > 2) {
					if (sgl & 1) {
						dbl += sgl / 2;
						emt = sgl - ((sgl / 2) * 2);
						sgl = 1;
					}
					else {
						dbl += (sgl - 1) / 2;
						emt = sgl - ((sgl / 2) * 2);
						sgl = 2;
					}
				}
			}
			// cout << sgl << " " << dbl << " " << emt << endl;
			res = max(res, sgl + dbl + emt);
		}
		cout << res << endl;
	}


	return 0;
}