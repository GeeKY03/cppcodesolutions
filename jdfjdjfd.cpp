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

template<typename T>
class Graph {
	map<T, list<T>> l;
public:
	void addEdge(long long x, long long y) {
		// Assuming bi-directional edges
		l[x].push_back(y);
		l[y].push_back(x);
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
};

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(0, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);

	g.BFS(0);




	return 0;
}