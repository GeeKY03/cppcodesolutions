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
		ll n; cin >> n;
		map<ll, ll> vbct;
		vector<map<ll, ll>> vmp;
		ll mx = 0; // max bit posn to save some time or may be i'm spending more by doing this AAAAHH...
		for (int i = 0; i < n; i++) {
			map<ll, ll> mp;
			ll m;
			cin >> m;
			for (int j = 0; j < m; j++) {
				ll x;
				cin >> x;
				mx = max(mx, x);
				mp[x]++;
				vbct[x]++;
			}
			vmp.pb(mp);
		}
		vlli p1;
		for (auto x : vbct) {
			if (vbct[x.ff] == 1) {
				p1.push_back(x.ff);
			}
		}
		bool chk = false;
		for (auto x : vmp) {
			for (auto y : x) {
				ll ctr = 0;
				for (auto z : p1) {
					if (x[z] != 0) {
						ctr++;
						break;
					}
				}
				if (ctr == 0) {
					chk = true;
					break;
				}
				else if (ctr > 1) {
					break;
				}
			}
			if (chk == true) {
				break;
			}
		}
		if (chk) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}