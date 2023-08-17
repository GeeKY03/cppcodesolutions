#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here

	ll t;
	cin >> t;
	while (t--) {
		ll n, q;
		vi v1;
		cin >> n >> q;
		int flag=0;
		ll mxi = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v1.pb(x);
			if (x == n) {
				mxi = i;
			}
		}

		vector<vector<int>> v(mxi + 1);
		ll wi = 0;
		for (int i = 1; i <= mxi; i++) {
			if (v1[wi] > v1[i]) {
				v[wi].pb(i);
			}
			else {
				wi = i;
				v[wi].pb(i);
			}
		}
		while (q--) {
			ll j, k;
			cin >> j >> k;
			if (j - 1 > mxi) {
				cout << 0 << endl;
			}
			else if (mxi == 0) {
				cout << k << endl;
			}
			else {
				ll sz = v[j - 1].size();
				if (sz == 0) {
					cout << 0 << endl;
				}
				else {
					ll ctr = 0;
					for (int l = 0; l < sz; l++) {
						if (v[j - 1][l] <= k) {
							ctr++;
						}
						else {
							break;
						}
					}
					if (k > mxi) {
						if (j - 1 == mxi) {
							ll diff = k - mxi;
							ctr += diff;
						}
					}
					cout << ctr << endl;
				}
			}
		}

	}
	return 0;
}