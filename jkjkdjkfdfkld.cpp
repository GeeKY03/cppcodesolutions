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

template <typename T>
class Graph {
	map<T, list<T>> l;
public:
	void addEdge(long long x, long long y) {
		// assuming bidirectional
		l[x].push_back(y);
		l[y].push_back(x);
	}
	// SSSP using BFS
	void SSSP(T src) { // Src-> Source Node
		map<T, int> dist;
		queue<T> q;
		q.push(src);
		for (auto node_pair : l) {
			T node = node_pair.first;
			dist[node] = INT_MAX;
		}
		dist[src] = 0;
		while (!q.empty()) {
			T node = q.front();
			q.pop();
			// cout << node << " ";
			for (auto nbr : l[node]) {
				if (dist[nbr] == INT_MAX) {
					q.push(nbr);
					dist[nbr] = dist[node] + 1;
				}
			}
		}
		// Print dist to every node
		for (auto node_pair : l) {
			T node = node_pair.first;
			cout << "Node:" << node << " Dist from src: " << dist[node] << endl;
		}
	}

	void BFS(T src) { // Src-> Source Node
		/* data structures Required
		1. Queue: To perform level ordered traversal (FIFO)
		2. A visited array to keep track of visited nodes */
		map<T, bool> visited;
		queue<T> q;
		q.push(src);
		visited[src] = true;
		while (!q.empty()) {
			T node = q.front();
			q.pop();
			cout << node << " ";
			for (auto nbr : l[node]) {
				if (!visited[nbr]) {
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
	}

	void DFS_2(T src, map<T, bool> &vis) {
		// recursive fundtion that will traverse the graph
		cout << src << " ";
		vis[src] = true;
		//go to all nbr of that node that is not visited
		for (T nbr : l[src]) {
			if (!vis[nbr]) {
				DFS_2(nbr, vis);
			}
		}
	}

	void DFS(T src) {
		map<T, bool> vis;
		// masrk all the nodes as not visited n the beginning
		for (auto p : l) {
			T node = p.first;
			vis[node] = false;
		}
		DFS_2(src, vis);
	}
};

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(0, 4);
	g.addEdge(5, 6);
	g.addEdge(6, 7);




	return 0;
}