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

vector<ll> dp(100005, 0);
vi coins = {1, 7, 10};

ll func(ll sum, ll n) {
	// Base Case
	if (sum == 0) {
		return 0;
	}

	// LookUp
	if (dp[sum] != 0) {
		return dp[sum];
	}

	// Rec Case
	ll ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (sum - coins[i] >= 0) {
			ll subprob = func(sum - coins[i], n);
			ans = min(ans, subprob + 1);
		}
	}
	dp[sum] = ans;
	return dp[sum];


}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	vi coins = {1, 7, 10};
	ll sum = 15;
	ll n = coins.size();
	cout << func(sum, n) << endl;


	return 0;
}