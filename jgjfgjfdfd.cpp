#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, r;
	cin >> n >> r;
	vlli v;
	ll oc = 0, ec = 0;
	ll res;
	for (int i = 0; i < n; i++) {

		ll x;
		cin >> x;
		if (i == 0) {
			res = x;
		}
		res = __gcd(res, x);
		v.pb(x);
		if (x & 1) {
			oc++;
		}
	}
	if (oc > 2) {
		cout << 1 << endl;
	}
	else if ((oc == 1) && (ec > 1)) {
		r = r / 2;
		r *= 2;
		ll ans;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				ans = v[0];
			}
			if (v[i] & 1) {
				ans = __gcd(ans, r);
			}
			else {
				ans = __gcd(ans, v[i]);
			}
		}
		if (ans > res) {
			cout << ans << endl;
		}
		else {
			cout << res << endl;
		}
	}
	else if ((oc == 1) || (ec == 1)) {
		if ()
		}


	return 0;
}