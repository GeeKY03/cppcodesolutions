// Topological sorting on the graph using BFS (KAHN's Algorithm)

// Valid only in DAGs

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

map<ll, list<ll>> l;

map<ll, ll> vis;

ll v, e;

void Topo_Sort() {
	vi order;
	vi indegree(v + 1, 0);
	for (auto x : l) {
		for (auto y : x.ss) {
			indegree[y]++;
		}
	}
	queue<int> q;
	for (int i = 0; i < v; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}

	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			indegree[nbr]--;
			if (indegree[nbr] == 0) {
				q.push(nbr);
			}
		}
		order.pb(node);
	}

	for (auto x : order) {
		cout << x << " ";
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
	}
	Topo_Sort();


	return 0;
}