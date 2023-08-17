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

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll v, e;
	cin >> v >> e;

	int vis[v + 1] = {0}; // vis means stored in array
	vector<pair<int, int>> adj[v + 1];

	for (int i = 0; i < e; i++) {
		ll x, y, w;
		cin >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push({0, 1}); // Choosing the starting node as 1 with weight 0

	int mst = 0;

	while (pq.empty()) {
		auto it = pq.top();
		int weight = it.ss;
		int node = it.ff;
		if (vis[node] == 1) {
			continue;
		}
		mst += weight;
		vis[node] = 1;

		for (auto x : adj[node]) {
			if (vis[x.ff] == 0) {
				pq.push({x.ss, x.ff});
			}
		}
	}
	cout << mst << endl;


	return 0;
}