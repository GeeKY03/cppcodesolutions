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
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll psum = 0;
		multiset<ll> ms;
		ll ctr = 0;
		for (int i = m; i < n; i++) {
			if (v[i] < 0) {
				ms.insert(v[i]);
			}
			psum += v[i];
			while (psum < 0) {
				auto it = ms.end();
				it--;
				ll z = *it;
				psum += 2 * abs(z);
				ctr++;
				ms.erase(it);
			}
		}
		if (v[m - 1] <= 0) {
			psum = v[m - 1];
		}
		else if (m != 1) {
			psum = (v[m - 1]) * -1;
			ctr++;
		}
		multiset<ll> mss;
		for (int i = m - 2; i >= 1; i--) {
			if (v[i] > 0) {
				mss.insert(v[i]);
			}
			psum += v[i];
			while (psum > 0) {
				auto it = mss.end();
				it--;
				ll z = *it;
				psum += (2 * (z * -1));
				ctr++;
				mss.erase(it);
			}
		}
		cout << ctr << endl;
	}


	return 0;
}