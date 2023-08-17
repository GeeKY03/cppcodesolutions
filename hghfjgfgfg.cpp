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
		ll n, k;
		cin >> n >> k;
		vector<pair<int, int>> a;
		vi b, res(n, 0);
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb({x, i});
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		sort(all(a));
		sort(all(b));
		for (auto x : a) {
			int num = x.ff, ind = x.ss;
			auto itr = lower_bound(b.begin(), b.end(), num - k);
			res[ind] = *itr;
			b.erase(itr);
		}
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}