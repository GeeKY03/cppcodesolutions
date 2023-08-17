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
	vector<int> coins = {11, 13, 5 , 18 , 16, 22 , 15, 8, 21};
	int n = coins.size();
	int sum = 24;
	vector<int> dp(100000 + 5, -1);
	for (int i = 0; i < n; i++) {
		dp[coins[i]] = 1;
	}
	for (int i = 1; i <= sum; i++) {
		for (int j = 0; j < n; j++) {
			if ((i - coins[j] > 0) && (dp[i - coins[j]] != -1)) {
				if (dp[i] > 0) {
					dp[i] = min(dp[i], dp[i - coins[j]] + 1);
				}
				else {
					dp[i] = dp[i - coins[j]] + 1;
				}
			}
		}
	}
	cout << dp[sum] << endl;


	return 0;
}