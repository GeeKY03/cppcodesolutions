#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a /* %m*/ ;
		}
		a = a * a /* %m */ ;
		b >>= 1;
	}
	return res;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll x = 10000000000000000;
		ll ctr = 0;
		while (x > 0) {
			x >>= 1;
			ctr++;
		}
		if (ctr > 16) {
			ctr = 16;
		}
		else {
			ctr = ctr;
		}
		ll num = (1 << ctr) - 1;
		set<ll> sett;
		for (int i = 0; i <= num; i++) {
			ll temp = i;
			ll res = 0;
			for (int i = 0; i < ctr; i++) {
				if (temp & 1) {
					res += binexp(k, i);
				}
				temp >>= 1;
			}

			sett.insert(res);
		}

		ll rctr = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				rctr++;
			}
			else {
				auto it = sett.find(v[i]);
				if (it != sett.end()) {
					rctr++;
					sett.erase(it);
				}
			}
		}
		if (rctr == n) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}