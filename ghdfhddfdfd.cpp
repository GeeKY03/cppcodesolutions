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
		ll n;
		cin >> n;
		vi v, v1;
		ll two = 0, o = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x == 2) {
				two = i;
			}
			if (x == 1) {
				o = i;
			}
			v.pb(x);
			v1.pb(x);
		}
		sort(all(v1));
		ll mxi = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == n) {
				mxi = i;
				break;
			}
		}
		int mx = max(o, two);
		int mn = min(o, two);
		pair<int, int> res;
		sort(v1.rbegin(), v1.rend());
		if (two < mxi && mxi < o) {
			res = {two + 1, o + 1};
		}
		else if (mxi < two && o < mxi) {
			res = {two + 1, o + 1};
		}
		else {
			if (mxi > o && mxi > two) {
				res = {mx + 1, mxi + 1};
			}
			else {
				res = {mn + 1, mxi + 1};
			}
		}
		vi temp;
		for (int i = 0; i < n; i++) {
			temp.pb(v1[i]);
		}
		cout << res.ff << " " << res.ss << endl;
	}


	return 0;
}