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
		ll psum = 0, tsum = 0;
		vlli v, fm, b;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			if (i < m) {
				psum += x;
				tsum += x;
				fm.pb(x);
			}
			else {
				tsum += x;
			}
		}
		if (n == 1) {
			cout << 0 << endl;
		}
		else {
			ll res = 0;
			for (int i = 1; i <= m; i++) {
				b.pb(v[i]);
			}
			b.pb(0);
			reverse(all(b));
			priority_queue<pair<ll, ll>> pq;
			ll num = 0;
			for (int i = 1; i <= m; i++) {
				if (b[i] > 0) {
					pq.push({b[i], i});
				}
				num += b[i];
				while (num > 0) {
					if (i == m)break;
					res++;
					t -= (2 * pq.top().ff);
					pq.pop();
				}
			}
			priority_queue<pair<ll, ll>> pq2;
			ll numm = 0;
			for (int i = m + 1; i <= n; i++) {
				if (v[i] < 0) {
					pq2.push({ -v[i], i});
				}
				numm = v[i];
				while (numm < 0) {
					res++;
					numm += (2 * pq2.top().ff);
					pq2.pop();
				}
			}
			cout << res << endl;
		}
	}


	return 0;
}