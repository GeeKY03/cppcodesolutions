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
		int xcase = 0, ycase = 0;
		if (xb > xa) {
			xcase++;
		}
		if (xc > xa) {
			xcase++;
		}
		if (yb > ya) {
			ycase++;
		}
		if (yc > ya) {
			ycase++;
		}
		ll res = 0;
		if ((ycase == 1 || ycase == 0) && (xcase == 1 || xcase == 0)) {
		}
		else if ((xcase == 1 || xcase == 0) && ycase == 2) {
			ll num = min(yb, yc);
		}
		else if (xcase == 2 && (ycase == 1 || ycase == 0)) {
			ll num = min(xb, xc);
		}
		else if (xcase == 2 && ycase == 2) {
			ll num1 = min(yb, yc);
			ll num2 = min(xb, xc);
		}
		if ((xb > xa && xc > xa) || (xb < xa && xc < xa)) {
			res += min(abs(xb - xa), abs(xc - xa));
		}
		if ((yb < ya && yc < ya) || (yb > ya && yc > ya)) {
			res += min(abs(yb - ya), abs(yc - ya));
		}
		cout << res + 1 << endl;
	}


	return 0;
}