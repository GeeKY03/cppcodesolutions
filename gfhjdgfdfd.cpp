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
		ll x, y;
		cin >> x >> y;
		ll mn = min(x, y);
		ll mx = max(x, y);
		ll moves = mn;
		ll res = INT_MAX;
		res = min(res, x + y);
		for (int i = 1; i <= sqrt(1e10) + 100; i++) {
			res = min(res, i - 1 + (x + i - 1) / i + (y + i - 1) / i);
		}
		cout << res << endl;
	}


	return 0;
}