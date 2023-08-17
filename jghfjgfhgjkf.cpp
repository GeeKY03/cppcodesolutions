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

int dp[100][100];

ll maxProfit(vector<int> wine, ll i, ll j, ll y) {
	if (i > j) {
		return 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	ll op1 = wine[i] * y + maxProfit(wine, i + 1, j, y + 1);
	ll op2 = wine[j] * y + maxProfit(wine, i, j - 1, y + 1);

	return dp[i][j] = max(op1, op2);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.pb(x);
	}

	memset(dp, -1, sizeof(dp));

	// We basically use 2 pointers i and j which are at both the ends of the array
	cout << maxProfit(v, 0, n - 1, 1);




	return 0;
}