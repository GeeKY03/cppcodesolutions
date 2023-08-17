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

	ll n;
	cin >> n;
	vlli cs, v;
	cs.pb(0);
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
		v.pb(x);
		cs.pb(sum);
	}
	sort(v.begin(), v.end());
	vlli scs;
	scs.pb(0);
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
		scs.pb(sum);
	}
	ll q;
	cin >> q;
	while (q--) {
		ll t, l, r;
		cin >> t >> l >> r;
		if (t == 1) {
			ll ans = cs[r] - cs[l - 1];
			cout << ans << endl;
		}
		else {
			ll ans = scs[r] - scs[l - 1];
			cout << ans << endl;
		}
	}


	return 0;
}