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
		char c;
		cin >> n >> c;
		vi col, g;
		string s;
		for (int i = 0; i < n; i++) {
			char x;
			cin >> x;
			if (x == c) {
				col.pb(i);
			}
			else if (x == 'g') {
				g.pb(i);
			}
			s.pb(x);
		}
		ll gsz = g.size();
		ll dist = 0;
		// for (auto x : col) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		// for (auto x : g) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		if (c == 'g') {
			cout << 0 << endl;
		}
		else {
			for (int i = 0; i < col.size(); i++) {
				if (g[gsz - 1] < col[i]) {
					ll ans = n - col[i];
					ans += g[0];
					dist = max(dist, ans);
				}
				else {
					ll x = *upper_bound(g.begin(), g.end(), col[i]);
					ll ans = x - col[i];
					dist = max(dist, ans);
				}
			}
			cout << dist << endl;
		}

	}


	return 0;
}