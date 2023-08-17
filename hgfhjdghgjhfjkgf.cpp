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


ll maxProfit(int n, vector<int> prices) {
	vector<int> dp(100005);

	int res = INT_MIN;
	for (int len = 1; len <= n; len++) {
		int ans = INT_MIN;
		for (int i = 0; i < len; i++) {
			int cut = i + 1;
			int curr_ans = prices[i] + dp[len - cut];
			ans = max(ans, curr_ans);
		}
		dp[len] = ans;
	}
	return dp[n];

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
	cout << maxProfit(n, v) << endl;





	return 0;
}