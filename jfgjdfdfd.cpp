#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<pair<int, int>> vp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			vp.pb({x, i});
		}
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		sort(vp.rbegin(), vp.rend());
		if (n == 1) {
			cout << 0 << endl;
		}
		else {
			vi res;
			ll r = 0;
			for (int i = 0; i < n - 1; i++) {
				ll b = 0;
				r += vp[i].first;
				v[vp[i].second] = 0;
				for (int j = 0; j < n; j++) {
					b += v[j];
				}
				ll x = min(r, b);
				res.pb(x);
			}
			for (int i = n - 1; i >= 0; i--) {
				ll b = 0;
				r += vp[i].first;
				v[vp[i].second] = 0;
				for (int j = 0; j < n; j++) {
					b += v[j];
				}
				ll x = min(r, b);
				res.pb(x);
			}
			sort(res.rbegin(), res.rend());
			cout << res[0] << endl;
		}
	}


	return 0;
}