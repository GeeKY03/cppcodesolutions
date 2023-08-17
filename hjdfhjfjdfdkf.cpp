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


int n, k;
int dp[1024][2048][2][2];
int Ways(int col, int comp,
         int row1, int row2) {
	if (comp > k)
		return 0;

	if (col > n) {
		if (comp == k)
			return 1;
		else
			return 0;
	}
	if (dp[col][comp][row1][row2] != -1)
		return dp[col][comp][row1][row2];
	else {
		int ans = 0;
		if (col == 1) {
			ans
			    = (ans
			       + Ways(col + 1, comp + 1, 0, 0)
			       + Ways(col + 1, comp + 1, 1, 1));
			ans
			    = (ans
			       + Ways(col + 1, comp + 2, 0, 1)
			       + Ways(col + 1, comp + 2, 1, 0));
		}
		else {
			if ((row1 && row2)
			        || (!row1 && !row2)) {
				ans = (((ans
				         + Ways(col + 1, comp + 1, 0, 0))
				        + Ways(col + 1, comp + 1, 1, 0))
				       + Ways(col + 1, comp + 1, 0, 1));
				ans = (ans
				       + Ways(col + 1, comp, 1, 1));
			}
			if (row1 && !row2) {
				ans = (((ans
				         + Ways(col + 1, comp, 0, 0))
				        + Ways(col + 1, comp, 1, 1))
				       + Ways(col + 1, comp, 1, 0));
				ans = (ans
				       + Ways(col + 1, comp + 2, 0, 1));
			}
			if (!row1 && row2) {
				ans = (((ans
				         + Ways(col + 1, comp, 0, 0))
				        + Ways(col + 1, comp, 1, 1))
				       + Ways(col + 1, comp, 0, 1));
				ans = (ans
				       + Ways(col + 1, comp + 2, 1, 0));
			}
		}

		return dp[col][comp][row1][row2] = ans;
	}
}
int main() {
	FastIO
	n = 2;
	k = 1;
	memset(dp, -1, sizeof(dp));
	cout << Ways(1, 0, 0, 0);
	return 0;
}
