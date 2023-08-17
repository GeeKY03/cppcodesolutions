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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vlli k;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			k.pb(x);
		}
		sort(all(k));
		vector<pair<pair<int, int>, int>> abc;
		for (int i = 0; i < m; i++) {
			ll a, b, c;
			cin >> a >> b >> c;
			abc.pb({{a, b}, c});
		}
		bool chk = true;
		for (int i = 0; i < m; i++) {
			ll a, b, c;
			a = abc[i].ff.ff;
			b = abc[i].ff.ss;
			c = abc[i].ss;
			// calcualte b^2-4ac
			double cal = (4LL * a * c);
			cal = sqrt(cal);
			ll min = b - cal;
			ll res = *lower_bound(all(k), min);
			if (res > min) {
				cout << "YES" << endl;
				cout << res << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		cout << endl;
	}


	return 0;
}