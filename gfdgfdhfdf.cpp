#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define eb emplace_back
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
		vector<pair<int, int>> vp;
		vector<pair<int, pair<int, int>>> vp1;

		sort(vp.begin(), vp.end());
		ll res = 0;
		map<int, vector<int>> vpp;
		vi broken(n + 2, 0);
		for (int i = 1; i <= n; i++) {
			ll x, y;
			cin >> x >> y;
			vp.pb({x, y});
			vp1.pb({x, {x - y, y}});
			vpp[x].eb(y);
		}
		for (int i = 1; i <= n; i++) {
			sort(vpp[i].rbegin(), vpp[i].rend());
		}

		ll x = 0, points = 0;
		// for (int i = 0; i < n; i++) {
		// 	if (vp1[i].ff > x) {
		// 		points += vp1[i].ss.ss;
		// 		broken[vp1[i].ff]++;
		// 		x++;
		// 	}
		// 	while (vp1[i].ff <= x) {
		// 		i++;
		// 	}
		// 	i--;
		// }
		for (int i = 1; i <= n; i++) {
			ll sz = vpp[i].size();
			for (int k = 0; k < i && k < sz; k++) {
				points += res;
				x++;
				res += vpp[i][k];
			}
		}
		cout << res << endl;

	}


	return 0;
}