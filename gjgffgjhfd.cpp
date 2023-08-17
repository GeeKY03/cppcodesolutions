class Solution {
public:
#define ll long long
#define pb push_back
#define ff first

	// Adjacency list
	map<ll, list<ll>> l;

// To store distances
	map<ll, ll> dist;

	int BFS_SSSP(ll src, ll dest) {
		queue<ll> q;
		q.push(src);
		// Asuming every node to be at infinite distance from src
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
		return dist[dest];
	}




	int minThrow(int N, int arr[]) {
		ll jump[50] = {0};
		for (int i = 0; i < 2 * N; i += 2) {
			ll src = arr[i], dest = arr[i + 1], jp = arr[i + 1] - arr[i];
			jump[src] = jp;
		}
		for (int i = 1; i <= 30; i++) {
			for (int dice = 1; dice <= 6; dice++) {
				ll j = i + dice;
				j += jump[j];
				if ((j >= 0) && (j <= 30)) {
					l[i].pb(j);
				}
			}
		}
		l[30].pb(30);
		return BFS_SSSP(1, 30);
	}
};