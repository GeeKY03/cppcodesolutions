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
	ll n;
	cin >> n;
	vector<pair<int, int>> vp;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		vp.pb({x, y});
	}
	vi v;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			ll y21 = 0, x21 = 0;
			ll ctr = 0;
			if (vp[j].second == vp[i].second) {
				for (int k = 0; k < n; k++) {
					if (vp[k].second == 0) {
						ctr++;
					}
				}
				v.pb(ctr);
			}
			else if (vp[j].first == vp[i].first) {
				for (int k = 0; k < n; k++) {
					if (vp[k].first == 0) {
						ctr++;
					}
				}
				v.pb(ctr);
			}
			else {
				y21 = vp[j].second - vp[i].second;
				x21 = vp[j].first - vp[i].first;
				ll c = 0;
				c = (vp[i].second * x21 * 1LL) - (vp[i].first * y21 * 1LL);
				for (int k = 0; k < n; k++) {
					if ((vp[k].second * x21 * 1LL) == ((vp[k].first * y21 * 1LL) + c)) {
						ctr++;
					}
				}
				v.pb(ctr);
			}
		}
	}
	sort(v.rbegin(), v.rend());
	cout << v[0] << endl;


	return 0;
}