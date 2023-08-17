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

int func(ll n) {
	if (n <= 3) {
		return 1;
	}
	int op1, op2, op3 = INT_MAX;
	if (n % 3 == 0) {
		op1 = min(func(n / 3), op1) + 1;
	}
	if (n % 2 == 0) {
		op2 = min(func(n / 2), op2) + 1;
	}
	op3 = min(func(n - 1), op3);
	int res = min(op1, min(op2, op3));
	return res;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	cout << func(n) << endl;


	return 0;
}