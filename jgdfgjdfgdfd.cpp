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

class DisjointSet {
	vector<int> rank, parent;
public:
	DisjointSet(int n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		for (int i = 0; i <= n; i++) {
			parent[i] = i;
		}
	}


	int findUPar(int node) {
		if (parent[node] == node) {
			return node; // Node is its own parent
		}
		// return Upar(parent[node]); Takes O(Log n ) time
		/*
		Doing Path Compression Alongside
		*/
		return parent[node] = findUPar(parent[node]);
	}

	void UnionByRank(int u, int v) {
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v) return;
		if (rank[ulp_u] < rank[ulp_v]) {
			parent[ulp_u] = ulp_v;
		}
		else if (rank[ulp_v] < rank[ulp_u]) {
			parent[ulp_v] = ulp_u;
		}
		else {
			parent[ulp_v] = ulp_u;
			rank[ulp_u]++;
		}
	}
};

int main() {
	FastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// Your code goes here
	DisjointSet ds(7);
	ds.UnionByRank(1, 2);
	ds.UnionByRank(2, 3);
	ds.UnionByRank(4, 5);
	ds.UnionByRank(6, 7);
	ds.UnionByRank(5, 6);
	// if 3 and 7 same or not
	if (ds.findUPar(3) == ds.findUPar(7)) {
		cout << "Same\n";
	}
	else cout << "Not same\n";

	return 0;
}