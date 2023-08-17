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

int dp[100005] = {1000000000};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	// Base Case
	dp[0] = 0, dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;
		if (i % 3 == 0) {
			op1 = dp[i / 3] + 1;
		}
		if (i % 2 == 0) {
			op2 = dp[i / 2] + 1;
		}
		op3 = dp[i - 1] + 1;
		// min of all operations required for an optimal ans
		int res = min(op1, min(op2, op3));
		dp[i] = res;
	}
	cout << dp[n] << endl;


	return 0;
}