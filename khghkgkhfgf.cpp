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
		ll n, p;
		cin >> n >> p;
		ll y = 0;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			if (x == 1) {
				y++;
			}
		}
		if (y == 0) {
			cout << "NO" << endl;
		}
		else {
			ll ans = 0, sum = 0;
			set<ll> sett;
			for (int i = 0; i < n; i++) {
				ll sz = sett.size();
				if ((sz == p - 2) && (sett.find(v[i]) != sett.end())) {
					sum += v[i];
				}
				else if (sz < p - 2) {
					sum += v[i];
				}
				else {
					if (sett.find(1) != sett.end()) {
						ans = max(ans, sum);
					}
					sett.clear();
					sum = 0;
				}
			}
			cout << ans << endl;
		}
	}


	return 0;
}