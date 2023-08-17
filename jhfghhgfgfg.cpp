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

ll dp[100005];


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	dp[1] = 0, dp[0] = 0, dp[2] = 1, dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		if ((n % 3 == 0)) {
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		}
		else if (n % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
	}
	cout << dp[n] << endl;




	return 0;
}