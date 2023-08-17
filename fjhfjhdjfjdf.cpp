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

ll v; /// No of vertices

// Adjacency list
map<ll, list<ll>> l;

queue<int> q; // To process the algorithm

vector<ll> res; // To store the elements in Topologically sorted order


void topo_sort() {
	ll indegree[v + 5] = {0};

	// Update indegree by traversing edges x->y => indegree[y]++
	for (auto x : l) {
		for (auto y : l[x.ff]) {
			indegree[y]++;
		}
	}

	// bfs
	// 1. Find nodes with 0 indegree
	for (int i = 1; i <= v; i++) {
		if (indegree[i] == 0) {
			q.push(i);  // All nodes with indegree 0 are added in the queue
		}
	}

	// Start removing elements from queue
	while (!q.empty()) {
		ll node = q.front();
		res.pb(node);
		q.pop();

		// Iterate over the neighbours of that node and reduce their indegree by 1

		for (auto nbr : l[node]) {
			indegree[nbr]--;
			if (indegree[nbr] == 0) {
				q.push(nbr);
			}
		}
	}



}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;  // V: Vertices   N: No of edeg relations
	cin >> v >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		// Directed edges
		l[x].pb(y);
	}

	topo_sort();

	for (auto x : res) {
		cout << x << " ";
	}
	cout << endl;



	return 0;
}
