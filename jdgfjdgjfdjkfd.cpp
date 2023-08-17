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
	long long V;
	// Array of list
	list<long long> *l;
public:
	Graph (long long V) {
		this-> V = V;
		l = new list<long long> [V];
	}

	void addEdge(long long x, long long y) {
		// Assuming Bidirectional
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void printAdjList() {
		// ITerate over all the vertices
		for (int i = 0; i < V; i++) {
			cout << "Vertex " << i << "-> ";
			// Iterate over all the elements of list of vertex
			for (auto x : l[i]) {
				cout << x << ",";
			}
			cout << endl;
		}
	}
};

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.printAdjList();



	return 0;
}