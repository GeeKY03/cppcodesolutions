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
		ll dist, f;
		cin >> dist >> f;
		for (int i = 0; i < n; i++) {
			v[i].ff = dist - v[i].ff;
		}
		sort(v.rbegin(), v.rend());
		ll trav = 0;
		multiset<ll> sett;
		ll ctr = 0;
		ll ind = n - 1;
		while (ind >= 0) {
			if (v[ind].ff <= (trav + f)) {
				sett.insert(v[ind].ss);
				f -= (v[ind].ff - trav);
				trav = v[ind].ff;
				ind--;
			}
			else {
				if (sett.size() > 0) {
					auto it = sett.end();
					it--;
					f += *it;
					sett.erase(it);
					ctr++;
				}
				else {
					break;
				}
			}
		}
		while ((sett.size() > 0) && (trav + f < dist)) {
			auto it = sett.end();
			it--;
			f += *it;
			sett.erase(it);
			ctr++;
		}
		if (trav + f >= dist) {
			cout << ctr << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}