// Cycle detection in a Directed Graph

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

map<ll, ll> vis, curr_dfs;

bool cyc = false;

void DFS(ll node, ll parent) {
	vis[node] = 1;
	curr_dfs[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr, node);
		}
		else {
			if ((curr_dfs[nbr] == 1) && (nbr != parent)) {
				cyc = true;
			}
		}
	}
	curr_dfs[node] = 0;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
	}

	for (int i = 0; i < v; i++) {
		if (vis[i] == 0) {
			DFS(i, -1);
		}
	}

	if (cyc) {
		cout << "Cycle" << endl;
	}
	else {
		cout << "No Cycle" << endl;
	}


	return 0;
}