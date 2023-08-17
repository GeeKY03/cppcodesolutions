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
vector<vector<int>> mat;

ll bs(ll row, ll n) {
	ll l = 0, r = n - 1;
	while (l <= r) {
		ll mid = (l + r) / 2;
		if (mat[row][mid] == 1) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return r + 1;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vi v;
		for (int j = 0; j < n; j++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		mat.pb(v);
	}
	ll num = 0, row = 0;
	for (int i = 0; i < n; i++) {
		ll ct = n - bs(i, n);
		if (ct > num) {
			num = ct;
			row = i;
		}
	}
	cout << row << " " << num << endl;




	return 0;
}