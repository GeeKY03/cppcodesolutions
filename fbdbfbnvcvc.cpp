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
	vi v = { -2, 1, 4, -1};
	ll n = v.size();
	ll st = 0, end = 0;
	ll sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		sum1 += v[i];
		if (sum1 < 0) {
			st = i + 1;
			sum2 += sum1;
			sum1 = 0;
		}
	}
	if (sum1 + sum2 >= 0) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}


	return 0;
}