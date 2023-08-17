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
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll sz = 0;
		map<ll, ll> mp;
		ll z = 0;
		ll ctr = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x % k > 0) {
				mp[k - (x % k)]++;
				sz++;
			}
		}
		if (!mp.empty()) {
			for (auto x : mp) {
				ll num = x.ff;
				num += (k * (mp[x.ff] - 1));
				num++;
				ctr = max(ctr, num);
			}
		}
		cout << ctr << endl;

	}
	return 0;
}