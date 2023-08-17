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
	ll t;
	cin >> t;
	while (t--) {
		ll xa, ya, xb, yb, xc, yc;
		cin >> xa >> ya >> xb >> yb >> xc >> yc;
		ll num1 = min(yb, yc);
		ll num2 = min(xb, xc);
		cout << abs(num1 - ya) + 1 + abs(num2 - xa) << endl;
	}


	return 0;
}