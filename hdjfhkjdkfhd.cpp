// Implement SSSP using BFS
#include<bits/stdc++.h>
using namespace std;
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

class Graph {
	map<ll, list<ll>> l;
public:
	void addEdge(ll x, ll y) {
		//Assuming bidirectional
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void BFS(ll src) {
		map<ll, ll> dist;
		queue<ll> q;
		q.push(src);
		for (auto node_pair : l) {
			ll node = node_pair.ff;
			dist[node] = INT_MAX;
		}
		dist[src] = 0;
		while (!q.empty()) {
			ll node = q.front();
			q.pop();
			for (auto nbr : l[node]) {
				if (dist[nbr] == INT_MAX) {
					q.push(nbr);
					dist[nbr] = dist[node] + 1;
				}
			}
		}
		// print dist of all nodes from source node
		for (auto node_pair : l) {
			ll node = node_pair.first;
			cout << "Node:" << node << " Dist from src: " << dist[node] << endl;
		}
	}
};

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	Graph g;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		g.addEdge(x, y);
	}
	g.BFS(0);


	return 0;
}