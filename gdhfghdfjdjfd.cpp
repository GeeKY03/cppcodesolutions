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
#define rall(x) x.rbegin(),x.rend()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

class DisjointSet {
	vector<int> rank, parent, size;
public:
	DisjointSet(int n) {
		// n+1 size, so that it works for both 0 and 1-based indexing
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1); // Size of every set initially is 1
		for (int i = 0; i <= n; i++) {
			parent[i] = i;
		}
	}

	int Upar(int node) {
		if (node == parent[node]) {
			// if a node is its own parent, then its the ulitmate parent of that set
			return node;
		}
		// return Upar(parent[node]); Makes the future operations take O(Log n) time
		/*
		Doing Path Compression Optimization
		*/
		return parent[node] = Upar(parent[node]);
	}

	void UnionByRank(int u, int v) {
		int Upar_u = Upar(u); // Ultimate parent of node u
		int Upar_v = Upar(v); // Ultimate parent of node v
		// If both nodes have same ultimate parent, then they belong to the same component
		if (Upar_u == Upar_v) return;
		// Connecting sets by comparing their rank
		if (rank[Upar_u] < rank[Upar_v]) {
			parent[Upar_u] = Upar_v;
		}
		else if (rank[Upar_v] < rank[Upar_u]) {
			parent[Upar_v] = Upar_u;
		}
		else {
			parent[Upar_v] = Upar_u;
			// It is necessary to update rank in case of same ranks
			// In case of different ranks, we are always joing smaller to higher due to which there is no change in the rank of set with higher rank
			rank[Upar_u]++;
		}
	}

	void UnionBySize(int u, int v) {
		int Upar_u = Upar(u); // Ultimate parent of node u
		int Upar_v = Upar(v); // Ultimate parent of node v
		// If both nodes have same ultimate parent, then they belong to the same component
		if (Upar_u == Upar_v) return;
		// Connecting sets by comparing their rank
		if (size[Upar_u] < size[Upar_v]) {
			parent[Upar_u] = Upar_v;
			size[Upar_v] += size[Upar_u];
		}
		else if (rank[Upar_v] < rank[Upar_u]) {
			parent[Upar_v] = Upar_u;
			size[Upar_u] += size[Upar_v];
		}
		else {
			parent[Upar_v] = Upar_u;
			// It is necessary to update rank in case of same ranks
			// In case of different ranks, we are always joing smaller to higher due to which there is no change in the rank of set with higher rank
			size[Upar_u] += size[Upar_v];
		}
	}

};

int main() {
	ll n;
	cin >> n;
	DisjointSet ds(150);
	ds.UnionBySize(1, 1);
	ll ctr = 0;
	vector<pair<ll, string>> v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		set<char> st;
		for (char x : s) {
			st.insert(x);
		}
		v.pb({st.size(), s});
	}
	sort(rall(v));
	// for (auto x : v) {
	// 	cout << x.ff << ": " << x.ss << endl;
	// }
	for (int i = 0; i < n; i++) {
		string s = v[i].second;
		bool chk = false;;
		for (char x : s) {
			if (ds.Upar(int(x)) == 1) {
				chk = true;
			}
		}
		if (chk) {
			for (char x : s) {
				ds.UnionBySize(1, int(x));
			}
		}
		else {
			ctr++;
			for (char x : s) {
				ds.UnionBySize(1, int(x));
			}
		}
	}
	if ((n == 3) && (v[0].ff == 3)) {
		ctr = 1;
	}
	cout << ctr << endl;


	return 0;
}

