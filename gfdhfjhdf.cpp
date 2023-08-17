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

ll dp[100005] = {0};

ll fib(ll n) {
	// Base Case
	if (n <= 1) {
		return n;
	}
	if (dp[n] == 0) {  // checking if the suproblem is unsolved
		return dp[n] = fib(n - 1) + fib(n - 2);
	}
	// if it's solved already then we return the computed value calculated in past
	return dp[n];
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	dp[0] = 0, dp[1] = 1;
	cout << fib(n);


	return 0;
}