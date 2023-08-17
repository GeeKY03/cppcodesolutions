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

map<ll, list<ll>> l;
map<ll, ll> vis;

ll cyc = 0;

void CFC(ll node, ll parent) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			CFC(nbr, node);
		}
		else if ((vis[nbr] == 1) && (nbr != parent)) {
			cyc++;
			return;
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	vector<vector<pair<char, int>>> grid(n, vector<pair<char, int>>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ll num = i * m;
			char x;
			cin >> x;
			grid[i][j] = {x, num + j};
		}
	}
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout  << grid[i][j].ff << " " << grid[i][j].ss << " ";
	// 	}
	// 	cout << endl;
	// }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == n - 1) {
				if (j == m - 1) {
					continue;
				}
				else if (grid[i][j].ff == grid[i][j + 1].ff) {
					l[grid[i][j].ss].pb(grid[i][j + 1].ss);
					l[grid[i][j + 1].ss].pb(grid[i][j].ss);
				}
			}
			else if (j == m - 1) {
				if (i == n - 1) {
					continue;
				}
				else if (grid[i][j].ff == grid[i + 1][j].ff) {
					l[grid[i][j].ss].pb(grid[i + 1][j].ss);
					l[grid[i + 1][j].ss].pb(grid[i][j].ss);
				}
			}
			else {
				if (grid[i][j].ff == grid[i][j + 1].ff) {
					l[grid[i][j].ss].pb(grid[i][j + 1].ss);
					l[grid[i][j + 1].ss].pb(grid[i][j].ss);
				}
				if (grid[i][j].ff == grid[i + 1][j].ff) {
					l[grid[i][j].ss].pb(grid[i + 1][j].ss);
					l[grid[i + 1][j].ss].pb(grid[i][j].ss);
				}
			}
		}
	}

	for (int i = 0; i < (n * m) - 1; i++) {
		if (vis[i] == 0) {
			CFC(i, -1);
		}
		if (cyc > 0) {
			break;
		}
	}
	if (cyc) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}



	return 0;
}