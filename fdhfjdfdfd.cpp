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

ll calc(ll X, ll n, vector<int> &v, string &s) {
	ll ctr = 0;
	for (int i = 0; i < n; i++) {
		if (X > v[i]) {
			if (s[i] == 'A') {
				ctr++;
			}
		}
		else {
			if (s[i] == 'B') {
				ctr++;
			}
		}
	}
	return ctr;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	string s;
	cin >> s;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll res = 0;
	int l = 0, r = 1e8 + 100;
	while (l + 1 < r) {
		ll mid = (l + r) / 2;
		ll lv = calc(l, n, v, s);
		ll rv = calc(r, n, v, s);
		ll mv = calc(mid, n, v, s);
		res = max(lv, max(rv, mv));
		if (r > l) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	cout << l << " " << r << endl;
	cout << res << endl;
	return 0;
}