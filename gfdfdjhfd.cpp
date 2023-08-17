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
	// Adj list in the form of a hashmap
	map<string, list<pair<string, long long>>> l;

public:
	void addEdge(string x, string y, bool bidir, long long wt) {
		l[x].push_back({y, wt});
		if (bidir) {
			l[y].push_back({x, wt});
		}
	}
	void printAdjList() {
		// Iterate over all the keys in the map
		for (auto x : l) {
			cout << "Vertex " << x.ff << "-> ";
			for (auto y : x.ss) {
				cout << "{" << y.ff << "," << y.ss << "}" << " ";
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
	Graph g;
	g.addEdge("A", "B", true, 20);
	g.addEdge("A", "C", true, 10);
	g.addEdge("B", "D", true, 40);
	g.addEdge("C", "D", true, 30);
	g.addEdge("A", "D", false, 50);
	g.printAdjList();



	return 0;
}