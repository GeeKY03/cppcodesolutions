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

map<ll, list<pair<ll, ll>>> l; // adjaceny list storing node long with edge weight
map<ll, ll> dist; // Stores dist of every node from source node
ll n, m;
// n-> No of vertices
// m-> No of edges

priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> min_heap;


void Dijkstra(ll src) {
	// every node from the src is at infinite distance
	// Vertex numbering starting from 0
	for (int i = 0; i < n; i++) {
		dist[i] = 1e9;
	}
	// dist of src node from itself is zero
	dist[src] = 0;
	// {dist, node}
	min_heap.push({0, src});
	while (!min_heap.empty()) {
		ll dis = min_heap.top().first, node = min_heap.top().second;
		min_heap.pop();
		for (auto nbr : l[node]) {
			ll child = nbr.first, edge_weight = nbr.second;
			if (dist[child] > dis + edge_weight) {
				dist[child] = dis + edge_weight;
				min_heap.push({dist[child], child});
			}
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll x, y, wt;
		cin >> x >> y >> wt;
		// {node, dis}
		l[x].pb({y, wt});
		l[y].pb({x, wt});
	}
	// let src node be 0
	Dijkstra(1);
	for (int i = 0; i < n; i++) {
		cout << i << ": " << dist[i] << endl;
	}



	return 0;
}