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
		vlli fm;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			if (i < m) {
				if (x > 0) {
					fm.pb(x);
				}
			}
		}
		ll psum = 0;
		for (int i = 0; i < m; i++) {
			psum += v[i];
		}
		multiset<ll> ms;
		ll ts = psum;
		ll ctr1 = 0;
		sort(fm.rbegin(), fm.rend());
		for (int i = m; i < n; i++) {
			if (v[i] > 0) {
				ts += v[i];
			}
			else {
				if (ts + v[i] < ts) {
					if (!fm.empty()) {
						if (!ms.empty()) {
							auto it = ms.end();
							it--;
							ll x = *it; // x is negative
							if (abs(x) <= fm[0]) {
								ts -= (2 * fm[0] * 1LL);
								ctr1++;
								fm.erase(fm.begin());
							}
							else {
								ts += (2 * abs(x));
								ctr1++;
								ms.erase(it);
							}
						}
						else {
							ts -= (2 * fm[0] * 1LL);
							ctr1++;
							fm.erase(fm.begin());
						}
					}
					else {
						ts += (2 * abs(v[i]) * 1LL);
						ctr1++;
					}
				}
				else {
					ts += v[i];
					ms.insert(v[i]);
				}
			}
		}
		cout << ctr1 << endl;
	}


	return 0;
}