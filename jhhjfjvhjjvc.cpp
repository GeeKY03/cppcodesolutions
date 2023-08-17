#include<bits/stdc++.h>
using namespace std;
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
const int MOD = 1e9 + 7;
const int N = 2e5;


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll dp[N + 5];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= N ; i++) {
		if (i % 2 == 0) {
			dp[i] = (dp[i - 1] + 1 + dp[i - 2] + 2 + dp[i - 3] + 1) % MOD;
		}
		else {
			dp[i] = (dp[i - 1] + 2 + dp[i - 2] + 1 + dp[i - 3] + 2) % MOD;
		}
	}
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << dp[n] << endl;
	}


	return 0;
}