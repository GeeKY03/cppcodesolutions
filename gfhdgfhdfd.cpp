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
		ll n, o1, o2;
		cin >> n >> o1 >> o2;
		vlli arr(n);
		set<ll> temp;
		map<ll, ll> set;
		// for (int i = 0; i < n; i++) {
		// 	ll x;
		// 	cin >> x;
		// 	mp[x]++;
		// 	if (mp[x] == 1) {
		// 		v.pb(x);
		// 	}
		// }
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			arr[i] = x;
			set[x]++;
		}
		ll ctr = 0;
		for (int i = 1; i <= n; i++) {
			if (set[i]) {
				ctr++;
			}
			ll cost = (n - ctr) * o1 + (i - ctr) * o2;
		}
		sort(all(arr));
		ll res = LLONG_MAX;
		// ll dup = 0;
		// for (auto x : mp) {
		// 	dup += mp[x.ff] - 1;
		// }
		for (int i = 0; i < n; i++) {
			temp.insert(arr[i]);
			ll cost = (n - temp.size()) * o1 + (arr[i] - temp.size()) * o2;
			res = min(res, cost);
		}
		// remove all and add one or otherwise
		cout << min(n * o1 + o2, res) << endl;
	}


	return 0;
}