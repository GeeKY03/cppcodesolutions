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
		ll n, m;
		cin >> n >> m;
		vlli v;
		multiset<ll> ms1, ms2;
		// ms1 for first m, ms2 for rest
		ll psum = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			if (i < m) {
				psum += x;
				if (x > 0) {
					ms1.insert(x);
				}
			}
		}
		ll ts = psum;
		ll ctr = 0;
		for (int i = m; i < n; i++) {
			if (ts + v[i] < psum) {
				// v[i] has to be negative for this
				if (!ms1.empty()) {
					auto it1 = ms1.end();
					it1--;
					ll a = abs(*it1);
					if (!ms2.empty()) {
						auto it2 = ms2.end();
						it2--;
						ll b = abs(*it2);
						// a is always +ve, and b is always -ve
						if (abs(v[i] > a) && (abs(v[i]) > b)) {
							ts += (2 * v[i] * (-1));
							ctr++;
						}
						else if ((a >= v[i]) && (a >= b)) {
							ts += (2 * a * (-1));
							psum += (2 * a * (-1));
							ts += v[i];
							ms1.erase(it1);
							ms2.insert(v[i]);
						}
						else if ((b >= v[i]) && (b >= a)) {
							ts += (2 * b * (-1));
							ts += v[i];
							ms2.erase(it2);
							ctr++;
						}
						// don't forget to erase
					}
					else {
						if (abs(v[i]) <= (a)) {
							ts += (2 * a * (-1));
							psum += (2 * a * (-1));
							ts += v[i];
							ms1.erase(it1);
							ms2.insert(v[i]);
						}
						else {
							ts += (2 * v[i] * (-1));
							ctr++;
						}
					}
				}
				else {

				}
			}
			else {
				if (v[i] > 0) {
					ts += v[i];
				}
				else {
					ts += v[i];
					ms2.insert(v[i]);
				}
			}
		}
	}


	return 0;
}