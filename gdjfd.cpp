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

vector<pair<ll, ll>> mst; // Stores the edges which make up the MST

// priority queue to get the minnimum edge weight
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> min_heap;

map<ll, list<pair<ll, ll>>> l;

map<ll, ll> vis; // visited array

ll min_edge_weight_sum = 0;

void prim() {
	// can start with any node, let's say 0
	// {weight, {node, parent}}
	min_heap.push({0, {0, -1}});
	while (!min_heap.empty()) {
		pair<ll, pair<ll, ll>> pr = min_heap.top();
		min_heap.pop();
		ll wt = pr.first,
		   node = pr.second.first,
		   parent = pr.second.second;
		if (parent == -1) {
			// it means it is just a node, not an edge
			vis[node] = 1;
			min_edge_weight_sum += 0;
			// pushing all the adjacent edges into the min_heap
			for (auto nbr : l[node]) {
				min_heap.push({nbr.second, {nbr.first, node}});
			}
		}
		else {
			if (vis[node] == 0) {
				min_edge_weight_sum += wt;
				vis[node] = 1;
				mst.push_back({node, parent});
				for (auto nbr : l[node]) {
					min_heap.push({nbr.second, {nbr.first, node}});
				}
			}
		}
	}
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// Graph should be connected, i.e. a single connected component
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll x, y, wt;
		cin >> x >> y >> wt;
		l[x].pb({y, wt});
		l[y].pb({x, wt});
	}

	prim();

	// Printing the min_edge_weight_sum
	cout << min_edge_weight_sum << endl;

	// Printing the edges of MST of given graph
	for (auto x : mst) {
		cout << x.first << " " << x.second << endl;
	}



	return 0;
}