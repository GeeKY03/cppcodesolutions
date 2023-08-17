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
		ll n, m, k;
		cin >> n >> m >> k;
		vector<pair<ll, ll>> vp;
		for (int i = 0; i < k; i++) {
			ll x;
			cin >> x;
			vp.pb({x, i});
		}
		sort(vp.rbegin(), vp.rend());
		// for (auto x : vp) {
		// 	cout << x.first << " " << x.second << endl;
		// }
		ll filled = 0;
		ll mx = 0;
		ll limit = n * m * 1LL;
		limit -= 4;
		int flag = 0;
		for (int i = 0; i < k; i++) {
			mx = max(mx, vp[i].second);
			if (vp[i].second < mx) {
				filled--;
			}
			else {
				filled = vp[i].second - i;
			}
			// cout << filled << endl;
			if (filled > limit) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "TIDAK" << endl;
			// cout << endl;
		}
		else {
			cout << "YA" << endl;
			// cout << endl;
		}
	}


	return 0;
}