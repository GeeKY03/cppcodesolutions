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
	ll n, m;
	cin >> n >> m;
	vector<vector<int>> grid(n, vector<int> (m, 0));
	vector<vector<int>> res(n, vector<int> (m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ll x;
			cin >> x;
			grid[i][j] = x;
		}
	}
	ll sr = 0, sc = 0, er = n - 1, ec = m - 1;
	ll ctr = 0;
	ll num = 0;
	while ((sr < er) && (sc < ec)) {
		if (ctr % 4 == 0) {
			for (int i = sc; i <= ec; i++) {
				for (int j = sr; j <= er; j++) {
					num += grid[i][j];
					res[i][j] = num;
				}
			}
			sr++;
			er--;
			sc++;
			ec--;
		}
		else if (ctr % 4 == 1) {
			for (int i = sr; i <= er; i++) {
				num += grid[i][ec];
				res[i][ec] = num;
			}
			ec--;
		}
		ctr++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}