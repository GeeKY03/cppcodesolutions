// Implementation of Kosaraju's Algorithm
// Only for directed graphs
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

map<ll, list<ll>> l, rl;
map<ll, ll> vis, rvis;
vi order;

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
	order.pb(node);
}

void RDFS(ll node) {
	rvis[node] = 1;
	cout << node << " ";
	for (auto nbr : rl[node]) {
		if (rvis[nbr] == 0) {
			RDFS(nbr);
		}
	}
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
		// Directed Edges
		l[x].pb(y);
		// Step 1: Storing the edges of the reversed graph
		rl[y].pb(x);
	}

	// Step 2: Obtain the speial order of the graph
	DFS(0);


	ll ctr = 0;

	// Step 3: Now use the obtained special order to perform DFS on the reversed graph from the last node
	for (int i = v; i >= 0; i--) {
		if (rvis[order[i]] == 0) {
			RDFS(order[i]);
			ctr++;
			cout << endl;
		}
	}
	cout << ctr << endl;




	return 0;
}