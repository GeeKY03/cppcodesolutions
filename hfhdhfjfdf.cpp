// Time Complexity: O(N^2)
// Space Complexity: O(N^2)

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

ll dp[1000][1000];

ll solve(vector<ll> &wine_price, ll i, ll j, ll year) {
	if (i > j) {
		return 0;
	}
	if (i == j) {
		return wine_price[i] * year; // or wine_price[j]*year
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	ll left = wine_price[i] * year + solve(wine_price, i + 1, j, year + 1);
	ll right = wine_price[j] * year + solve(wine_price, i, j - 1, year + 1);
	return dp[i][j] = max(left, right);
}

ll max_profit(vector<ll> &wine_price, ll n) {
	memset(dp, -1, sizeof(dp));
	return solve(wine_price, 0, n - 1, 1);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	vector<ll> wine_price = {2, 4, 6, 2, 5};
	ll n = wine_price.size();
	ll res = 0;
	cout << max_profit(wine_price, n) << endl;


	return 0;
}