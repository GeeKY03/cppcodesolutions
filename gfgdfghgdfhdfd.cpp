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
		ll n, o1, o2;
		cin >> n >> o1 >> o2;
		vlli v;
		map<ll, ll> mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
			if (mp[x] == 1) {
				v.pb(x);
			}
		}
		ll dup = 0;
		for (auto x : mp) {
			dup += mp[x.ff] - 1;
		}
		ll cost = 0;
		cost = dup * o1;
		sort(all(v));
		vlli res;
		ll sz = v.size();
		for (int i = sz - 1; i >= 0; i--) {
			ll add = v[i] - (i - 1);
			add *= o2;
			if (add <= o1) {
				cost += add;
				res.pb(cost);
				break;
			}
			else {
				if (i == 0) {
					if (add > (o1 + o2)) {
						cost += (o1 + o2);
						res.pb(cost);
					}
					else {
						cost += add;
						res.pb(cost);
					}
				}
				else {
					cost += o1;
					if (i == 0) {
						res.pb(cost);
					}
				}
			}
		}
		sort(all(res));
		cout << res[0] << endl;
	}


	return 0;
}