// Wine selling with Memoization

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

ll dp[100][100];

ll max_profit(vector<int> &wine, ll i, ll j, ll y) {
	// Base Case:
	// 1. When no botlles are left
	if (i > j) {
		return 0;
	}
	// 2. When only one bottle is left
	if (i == j) {
		return wine[i] * y;
	}

	// Recursive Case:

	// If subproblem is already calculated
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int left = wine[i] * y + max_profit(wine, i + 1, j, y + 1);
	int right = wine[j] * y + max_profit(wine, i, j - 1, y + 1);

	return dp[i][j] = max(left, right);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vi wine;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		wine.pb(x);
	}

	memset(dp, -1, sizeof(dp));

	cout << max_profit(wine, 0, n - 1, 1) << endl;



	return 0;
}