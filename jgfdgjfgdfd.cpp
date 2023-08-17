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
vector<vector<pair<char, int>>> grid;
ll n, m, k, ctr = 0;

void BFS(ll src, ll m, ll left) {
	if (ctr == left) {
		return;
	}
	vis[src] = 1;
	ctr++;

	queue<int> q;
	q.push(src);
	while (!q.empty()) {
		if (ctr == left) {
			break;
		}
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			ll x = nbr / m, y = nbr % m;
			if ((grid[x][y].ff == '.') && (vis[nbr] == 0)) {
				q.push(nbr);
				vis[nbr] = 1;
				ctr++;
				if (ctr == left) {
					break;
				}
			}
		}
	}
}





int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> n >> m >> k;
	grid.resize(n, vector<pair<char, int>> (m));
	ll w = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			if (x == '.') {
				w++;
			}
			grid[i][j] = {x, i*m + j};
		}
	}
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout << grid[i][j].ff << " " << grid[i][j].ss << " ";
	// 	}
	// 	cout << endl;
	// }
	ll left = w - k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j].ff == '.') {
				if (i + 1 < n) {
					if (grid[i][j].ff == grid[i + 1][j].ff) {
						l[grid[i][j].ss].pb(grid[i + 1][j].ss);
						l[grid[i + 1][j].ss].pb(grid[i][j].ss);
					}
				}
				if (j + 1 < m) {
					if (grid[i][j].ff == grid[i][j + 1].ff) {
						l[grid[i][j].ss].pb(grid[i][j + 1].ss);
						l[grid[i][j + 1].ss].pb(grid[i][j].ss);
					}
				}
			}
		}
	}


	// for (auto x : l) {
	// 	cout << x.ff << ": ";
	// 	for (auto y : l[x.ff]) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }

	// Let's do BFS: easier to break, as compared to astronomical no of DFS calls

	for (int i = 0; i < (n * m); i++) {
		ll x = i / m, y = i % m;
		if ((grid[x][y].ff == '.') && (vis[i] == 0)) {
			BFS(i, m, left);
		}
	}
	if (k != 0) {
		for (auto x : vis) {
			if (x.ss == 0) {
				ll i = x.ff / m, j = x.ff % m;
				grid[i][j].ff = 'X';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << grid[i][j].ff << "";
		}
		cout << endl;
	}





	return 0;
}