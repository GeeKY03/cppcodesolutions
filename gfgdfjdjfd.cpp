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

int minSteps(ll n, int dp[]) {
	// Base Case
	if (n <= 1) {
		return 0;
	}

	// Rec Case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;
	if (n % 3 == 0) {
		op1 = minSteps(n / 3, dp) + 1;
	}
	if (n % 2 == 0) {
		op2 = minSteps(n / 2, dp) + 1;
	}
	op3 = minSteps(n - 1, dp) + 1;
	int ans = min(op1, min(op2, op3));
	dp[n] = ans;
	return dp[n];
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	int dp[n + 1] = {1000000000};
	cout << minSteps(n, dp) << endl;


	return 0;
}