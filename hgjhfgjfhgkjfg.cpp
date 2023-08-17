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
		ll n, k;
		cin >> n >> k;
		vector<vector<int>> grid(n, vector<int> (n, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				ll x;
				cin >> x;
				grid[i][j] = x;
			}
		}
		vector<vector<int>> grid2(n, vector<int> (n, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				grid2[n - i - 1][n - j - 1] = grid[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] != grid2[i][j]) {
					k--;
				}
			}
		}
		if (k < 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}


	return 0;
}