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
		ll n;
		cin >> n;
		vector<pair<ll, ll>> v;
		for (int i = 0; i < n; i++) {
			ll x, y;
			cin >> x >> y;
			v.pb({x, y});
		}
		multiset<ll>sett;
		ll dist, f;
		cin >> dist >> f;
		ll trav = dist;
		ll ctr = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (v[i].ff >= (trav - f)) {
				if (v[i].ss > 0) {
					sett.insert(v[i].ss);
				}
				f -= (trav - v[i].ff);
				trav = v[i].ff;
			}
			else {
				while (((trav - f) >= v[i].ff) && (sett.size() > 0)) {
					auto it = sett.end();
					it--;
					f += *it;
					sett.erase(it);
					ctr++;
				}
			}
		}
		while (((trav - f) >= dist) && (sett.size() > 0)) {
			auto it = sett.end();
			it--;
			f += *it;
			sett.erase(it);
			ctr++;
		}
		if (trav - f <= 0) {
			cout << ctr << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}