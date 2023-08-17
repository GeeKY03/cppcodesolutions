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

//SSSP for snake and ladder
class Graph {
	map<ll, list<ll>> l;
public:
	void addEdge(long long x, long long y) {
		l[x].push_back(y);
		// Since, the edges in snake and ladder game are directed
		// l[y].push_back(x);
	}

	void BFS(ll src, ll dest) {
		map<ll, ll> dist;
		queue<ll> q;
		q.push(src);
		for (auto x : l) {
			dist[x.ff] = INT_MAX;
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
		// Printing the destination to dist node
		cout << dist[dest] << endl;
	}
};

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = 10;
	board[32] = -2;
	board[34] = -22;

	// Adding edges to the graph
	Graph g;
	for (int i = 0; i <= 36; i++) { // because 36 is the destination of our smal snake and ladder game
		for (int dice = 1; dice <= 6; dice++) {
			ll j = i + dice;
			j += board[j];
			if (j <= 36) {
				g.addEdge(i, j);
			}
		}
	}
	g.addEdge(36, 36);
	g.BFS(0, 36);


	return 0;
}