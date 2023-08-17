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
		map<ll, set<ll>> mp;
		for (int i = 1; i <= n; i++) {
			ll num;
			cin >> num;
			for (int j = 0; j < num; j++) {
				ll x;
				cin >> x;
				mp[x].insert(i);
			}
		}
		vector<int> res(n + 1, 0);
		for (auto x : mp) {
			ll mx = 0;
			for (auto y : mp[x.ff]) {
				mx = max(mx, y);
			}
			res[mx] = x.ff;
		}
		bool chk = true;
		for (int i = 1; i <= n; i++) {
			if (res[i] == 0) {
				chk = false;
			}
		}
		if (chk == false) {
			cout << -1 << endl;
		}
		else {
			for (int i = 1; i <= n; i++) {
				cout << res[i] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}