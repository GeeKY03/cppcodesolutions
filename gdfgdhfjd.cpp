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
	ll n, m, k;
	cin >> n >> m >> k;
	vector<vector<char>> grid(n, vector<char> (m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			grid[i][j] = x;
		}
	}
	ll rmx = n - 1, rmn = 0, cmx = m - 1, cmn = 0;
	ll ind = 0;
	while (k > 0) {
		if (ind % 4 == 0) {
			for (int j = 0; j < m; j++) {
				if (k > 0) {
					if (grid[rmn][j] == '.') {
						grid[rmn][j] = 'X';
						k--;
					}
				}
				else {
					break;
				}
			}
			rmn++;
		}
		else if (ind % 4 == 1) {
			for (int i = 0; i < n; i++) {
				if (k > 0) {
					if (grid[i][cmx] == '.') {
						grid[i][cmx] = 'X';
						k--;
					}
				}
				else {
					break;
				}
			}
			cmx--;
		}
		else if (ind % 4 == 2) {
			for (int j = m - 1; j >= 0; j--) {
				if (k > 0) {
					if (grid[rmx][j] == '.') {
						grid[rmx][j] = 'X';
						k--;
					}
				}
				else {
					break;
				}
			}
			rmx--;
		}
		else {
			for (int i = n - 1; i >= 0; i--) {
				if (k > 0) {
					if (grid[i][cmn] == '.') {
						grid[i][cmn] = 'X';
						k--;
					}
				}
				else {
					break;
				}
			}
			cmn++;
		}
		ind++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}