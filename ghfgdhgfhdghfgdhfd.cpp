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


	// n-> Vertices     m-> Edges
	ll n, m;
	cin >> n >> m;

	// Source Node
	ll src = 0;

	// To store the distance of all nodes from source node
	vector<int> dist(n + 1, 1e8);
	dist[src] = 0;


	vector<vector<ll>> edges;
	for (int i = 0; i < n; i++) {
		ll u, v, wt;
		cin >> u >> v >> wt;
		edges.pb({u, v, wt});
	}


	// Performing N-1 iterations
	for (int i = 0; i < n - 1; i++) {
		for (auto it : edges) {
			ll u = it[0], v = it[1], wt = it[2];
			if ((dist[u] != 1e8) && (dist[u] + wt < dist[v])) {
				dist[v] = dist[u] + wt;
			}
		}
	}

	bool neg_cycle = false;
	// Checking for negative cylces by performing the Nth iteration
	for (auto it : edges) {
		ll u = it[0], v = it[1], wt = it[2];
		if ((dist[u] != 1e8) && (dist[u] + wt < dist[v])) {
			neg_cycle = true;
		}
	}

	// dist stores all the distances

	if (neg_cycle) {
		cout << "Graph has a negative cycle" << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << i << ": ";
			cout << dist[i] << endl;
		}
	}

	return 0;
}