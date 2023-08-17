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
	ll n, m;
	cin >> n >> m;
	// n -> Vertices; m -> Edges
	vector<vector<int>> matrix (n, vector<int> (n, 1e9));
	for (int i = 0; i < m; i++) {
		ll x, y, wt;
		cin >> x >> y >> wt;
		matrix[x][y] = wt;
	}

	// Floyd - warshall algorithm (Algorithm?, Not really, it;s just a simple brute force)
	// Logic behind is
	// we check if we can go from i to j, via k, where k is every possible node in the graph
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
				if (i == j) {
					matrix[i][j] = 0;
				}
			}
		}
	}

	bool neg_cycle = false;
	// Checking for negative cycles
	for (int i = 0; i < n; i++) {
		if (matrix[i][i] < 0) {
			neg_cycle = true;
		}
	}
	if (neg_cycle) {
		cout << "Negative cycle detected" << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	// 1000000000 means that is is unreachable


	return 0;
}