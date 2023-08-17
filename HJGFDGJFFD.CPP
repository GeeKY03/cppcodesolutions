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
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		vi res;
		res.pb(v[0]);
		string ans = "1";
		int le = v[0];
		int fe = v[0];
		bool chk = false;
		// do +1 in ansz
		for (int i = 1; i < n; i++) {
			if (v[i] >= le && chk == false) {
				res.pb(v[i]);
				ans += '1';
				le = v[i];
			}
			else if (v[i] <= fe && chk == false) {
				res.pb(v[i]);
				ans += '1';
				chk = true;
				fe = v[i];
			}
			else if (v[i] >= fe && v[i] <= v[0]) {
				res.pb(v[i]);
				ans += '1';
				fe = v[i];
			}
			else {
				ans += '0';
			}
		}
		// for (auto x : res) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		cout << ans << endl;
	}


	return 0;
}