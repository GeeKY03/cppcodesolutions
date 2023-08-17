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
		vector<pair<int, pair<int, int>>> vp;
		for (int i = 0; i < n; i++) {
			ll x, y;
			cin >> x >> y;
			vp.pb({x, {x - y, y}});
		}
		sort(vp.begin(), vp.end());
		vi broken(n + 2, 0);
		// for (auto x : vp) {
		// 	cout << x.ff << " " << x.ss.ff << " " << x.ss.ss << endl;
		// }
		ll x = 0, points = 0;
		for (int i = 0; i < n; i++) {
			if (vp1[i].ff > x) {
				points += vp1[i].ss.ss;
				broken[vp1[i].ff]++;
				x++;
			}
			while (vp1[i].ff <= x) {
				i++;
			}
			i--;
		}
		cout << points << endl;
	}


	return 0;
}