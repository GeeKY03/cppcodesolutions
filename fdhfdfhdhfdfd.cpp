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

ll func(vector<ll> &v, string s, ll h, ll n) {
	ll ctr = 0, sind = 0, ind = 0;
	ll g = 2, b = 1;
	while (ind <= n - 1) {
		if (h > v[ind]) {
			h += (v[ind] / 2);
			ind++;
			ctr++;
		}
		else if (h <= v[ind]) {
			if ((b == 0) && (g == 0)) {
				break;
			}
			else {
				if (s[sind] == '1') {
					h *= 3;
					b--;
				}
				else {
					h *= 2;
					g--;
				}
				sind++;
			}
		}
	}
	return ctr;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, h;
		cin >> n >> h;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		vlli res;
		res.pb(func(v, "001", h, n));
		res.pb(func(v, "010", h, n));
		res.pb(func(v, "100", h, n));
		sort(res.rbegin(), res.rend());
		cout << res[0] << endl;
	}


	return 0;
}