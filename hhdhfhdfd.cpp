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
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll pi = 1, pd = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] < v[i - 1]) {
				pi = 0;
			}
			else {
				pd = 0;
			}
		}
		if ((pi == 1) ) {
			cout << 0 << endl;
		}
		else if (pd == 1) {
			ll num = v[0];
			cout << num << endl;
		}
		else {
			ll mx = 0;
			ll ind = -1;
			for (int i = 1; i < n; i++) {
				if (mx < abs(v[i] - v[i - 1])) {
					mx = abs(v[i] - v[i - 1]);
					ind = i;
				}
			}
			ll num = (v[ind] + v[ind - 1]) / 2;
			vlli v2, v3;
			for (int i = 0; i < n; i++) {
				// cout << abs(num - v[i]) << " ";
				v2.pb(abs(num - v[i]));
				v3.pb(abs(num - v[i]));
			}
			// cout << endl;
			bool chk = true;
			sort(v2.begin(), v2.end());
			for (int i = 0; i < n; i++) {
				if (v2[i] != v3[i]) {
					chk = false;
				}
			}
			if (chk == false) {
				chk = true;
				num = (v[0] + v[1]) / 2;
				vlli v4, v5;
				for (int i = 0; i < n; i++) {
					// cout << abs(num - v[i]) << " ";
					v4.pb(abs(num - v[i]));
					v5.pb(abs(num - v[i]));
				}
				sort(v4.begin(), v4.end());
				for (int i = 0; i < n; i++) {
					if (v4[i] != v5[i]) {
						chk = false;
					}
				}
			}
			if (chk) {
				cout << num << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}


	return 0;
}