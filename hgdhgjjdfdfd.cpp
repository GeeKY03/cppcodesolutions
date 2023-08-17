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
	ll n, m;
	cin >> n >> m;
	vi v;
	vi ps(n + 1, 0);
	ll sum = 0;
	for (int i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		sum += x;
		v.pb(x);
		ps[i] = sum;
	}
	ll res = 0;
	while (m--) {
		ll x, y;
		cin >> x >> y;
		res += ps[y] - ps[x - 1];
	}
	cout << res << endl;



	return 0;
}