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

map<ll, ll> frq;
vector<ll> dp(1000005, 0);

ll f(ll n) {
	if (n == 0) {
		return dp[0];
	}
	if (n == 1) {
		return dp[1];
	}
	return dp[n] = max(f(n - 1), f(n - 2) + frq[n] * n);
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		frq[x]++;
	}
	dp[0] = 0, dp[1] = frq[1];
	cout << dp[2] << endl;




	return 0;
}