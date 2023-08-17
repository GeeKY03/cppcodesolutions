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

class DisjointSet {
	vector<int> rank, parent, size;
public:
	DisjointSet(int n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for (int i = 0; i <= n; i++) {
			parent[i] = i;
		}
	}

	int Upar(int node) {
		if (node == parent[node]) {
			return node;
		}
		return parent[node] = Upar(parent[node]);
	}

	void UnionByRank(int u, int v) {
		int Upar_u = Upar(u);
		int Upar_v = Upar(v);
		if (Upar_u == Upar_v) return;
		if (rank[Upar_u] < rank[Upar_v]) {
			parent[Upar_u] = Upar_v;
		}
		else if (rank[Upar_v] < rank[Upar_u]) {
			parent[Upar_v] = Upar_u;
		}
		else {
			parent[Upar_v] = Upar_u;
			rank[Upar_u]++;
		}
	}

	void UnionBySize(int u, int v) {
		int Upar_u = Upar(u);
		int Upar_v = Upar(v);
		if (Upar_u == Upar_v) return;
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
			size[Upar_u] += size[Upar_v];
		}
	}
};

set<ll> st;
ll ctr = 0;

void DFS(ll node, ll parent) {
	vis[node] = 1;
	st.insert(node);
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr, node);
			ctr++;
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	DisjointSet ds(n);
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		ds.UnionBySize(x, y);
		l[x].pb(y);
		l[y].pb(x);
	}
	bool chk = true;
	for (int i = 1; i <= n; i++) {
		if ((vis[i] == 0) && (l[i].empty() == false)) {
			DFS(i, -1);
			ll sz = st.size();
			ll res = ((sz - 1) * sz) / 2;
			if (ctr != res) {
				chk = false;
			}
			cout << ctr << " " << sz << endl;
			ctr = 0; st.clear();
		}
	}
	if (chk) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


	return 0;
}