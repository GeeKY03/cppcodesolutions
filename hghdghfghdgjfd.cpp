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

ll mxprofit(vector<int> &wine, ll i, ll j, ll y) {
	// Base Case: When no bottles are left that is when i>j
	if (i > j) {
		return 0;
	}

	// Recursive Case

	// Choosing the left bottle
	int op1 = wine[i] * y + mxprofit(wine, i + 1, j, y + 1);
	// Choosing the right bottle
	int op2 = wine[j] * y + mxprofit(wine, i, j - 1, y + 1);

	return max(op1, op2);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vi wine;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		wine.pb(x);
	}

	cout << mxprofit(wine, 0, n - 1, 1) << endl;


	return 0;
}