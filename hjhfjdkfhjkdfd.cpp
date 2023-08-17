#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	ll n, xo, yo;
	cin >> n >> xo >> yo;
	vector<pair<ll, ll>> vp;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		vp.pb({x, y});
	}
	ll sz = n;
	ll ctr = 0;
	while (sz > 0) {
		ll a1 = vp[0].ff, a2 = vp[0].ss;
		vp.erase(vp.begin());
		sz--;
		ctr++;
		for (int i = 0; i < sz; i++) {
			ll a = (vp[i].ss - yo) * (a1 - xo);
			ll b = (a2 - yo) * (vp[i].ff - xo);
			// cout << a << " " << b << endl;
			if (a == b) {
				vp.erase(vp.begin() + i + 1);
				sz--;
			}
		}
	}
	cout << ctr << endl;




	return 0;
}