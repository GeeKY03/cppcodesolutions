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
#define all(x) x.rbegin(),x.rend()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, s1, s2;
		cin >> n >> s1 >> s2;
		vector<pair<ll, ll>> vp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			vp.pb({x, i + 1});
		}
		sort(all(vp));
		// for (auto x : vp) {
		// 	cout << x.ff << " " << x.ss << endl;
		// }
		vi a, b;
		ll sz1 = 0, sz2 = 0;
		for (int i = 0; i < n; i++) {
			ll num = vp[i].ss;
			ll t1 = (sz1 + 1) * s1;
			ll t2 = (sz2 + 1) * s2;
			if (t1 > t2) {
				b.pb(num);
				sz2++;
			}
			else {
				a.pb(num);
				sz1++;
			}
		}
		cout << sz1 << " ";
		for (auto x : a) {
			cout << x << " ";
		}
		cout << endl;
		cout << sz2 << " ";
		for (auto x : b) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}