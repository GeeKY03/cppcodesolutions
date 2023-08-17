#include<bits/stdc++.h>
using namespace std;
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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vector<pair<string, ll>> vp;
		ll one = 0;
		for (int i = 0; i < n; i++) {
			ll ctr = 0;
			string s;
			for (int j = 0; j < m; j++) {
				char x;
				cin >> x;
				if (x == '1') {
					ctr++;
				}
				s.pb(x);
			}
			one += ctr;
			vp.pb({s, ctr});
		}
		if (one % n != 0) {
			cout << -1 << endl;
		}
		else {
			// for (auto x : vp) {
			// 	cout << x.ff << " " << x.ss << endl;
			// }
			vector<pair<pair<ll, ll>, ll>> vpp;
			ll ptr1 = 0, // for less than amt
			   ptr2 = 0; // for more than amt
			ll amt = one / n;
			while (vp[ptr2].ss <= amt) {
				ptr2++;
			}
			while (vp[ptr1].ss >= amt) {
				ptr1++;
			}
			while (ptr1 < n ) {
				for (int i = 0; i < m; i++) {
					if ((vp[ptr2].ff[i] == '1') && (vp[ptr1].ff[i] == '0')) {
						swap(vp[ptr2].ff[i], vp[ptr1].ff[i]);
						vp[ptr2].ss--;
						vp[ptr1].ss++;
						vpp.pb({{ptr1 + 1, ptr2 + 1}, i + 1});
					}
					if ((vp[ptr2].ss == amt) || (vp[ptr1].ss == amt)) {
						break;
					}
				}
				while (vp[ptr1].ss >= amt) {
					ptr1++;
				}
				while ((vp[ptr2].ss <= amt) && (ptr2 < n)) {
					ptr2++;
				}
				if ((ptr1 > n - 1) || (ptr2 > n - 1)) {
					break;
				}
			}
			cout << vpp.size() << endl;
			for (auto x : vpp) {
				cout << x.ff.ff << " " << x.ff.ss << " " << x.ss << endl;
			}
		}
	}


	return 0;
}