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

ll odd_cycle = 0;

/* Color Code:
0: Not visited
1: Visited with colour 1
2: Visited with colour 2 */


void DFS(ll node, ll parent, ll col) {
	vis[node] = col; // Coloring the visted node
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr, node, 3 - col);
			// 3 - col is the formula to switch colours
		}
		else if ((nbr != parent) && (vis[nbr] == col)) {
			odd_cycle++;
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll v, n;
	cin >> v >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}

	DFS(1, -1, 1);

	if (odd_cycle > 0) {
		cout << "Not Bipartite" << endl;
	}
	else {
		cout << "Bipartite" << endl;
	}


	return 0;
}