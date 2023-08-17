/* Problem Statement:
You are a given a number n as input. Your task is to reduce that number to 1 through
a series of possible operations as follows
In one step, You can perform only 1 of 3 operations
1. n -> n/3, if n%3==0
2. n -> n/2, if n%2==0
3. n-> n-1

Find the minnimum number of steps required to reduce n to 1.

Example:
5
sol: 3
5 -> 4 -> 2 -> 1
5 -> 4 -> 3 -> 1
2 possible ways to do the same

9
sol: 2
9 -> 3 -> 1
*/

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

ll process(ll n) {
	if (n <= 1) {
		return 0;
	}
	ll op1, op2, op3 = INT_MAX;
	if (n % 3 == 0) {
		op1 = process(n / 3) + 1;
	}
	if (n % 2 == 0) {
		op2 = process(n / 2) + 1;
	}
	op3 = process(n - 1) + 1;
	ll res = min(op1, min(op2, op3));
	return res;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	cout << process(n) << endl;


	return 0;
}