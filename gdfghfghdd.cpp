// Cycle detection using DSU (Disjoint Set Union)

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
	vector<pair<int, int>> l;
	vector<int> size, parent;
public:
	DisjointSet(int n) {
		size.resize(n + 1, 1);
		parent.resize(n + 1);
		for (int i = 0; i <= n; i++) {
			parent[i] = i;
		}
	}

	int Upar(int node) {
		if (parent[node] == node) {
			return node;
		}
		return parent[node] = Upar(parent[node]);
	}

	void UnionBySize(ll u, ll v) {
		int Upar_u = Upar(u);
		int Upar_v = Upar(v);
		if (Upar_u == Upar_v) {
			return ;
		}
		else {
			if (size[Upar_u] > size[Upar_v]) {
				parent[Upar_v] = Upar_u;
				size[Upar_u] += size[Upar_v];
			}
			else {
				parent[Upar_u] = Upar_v;
				size[Upar_v] += size[Upar_u];
			}
		}
	}
};

int main() {
	FastIO


	// Your code goes here
	ll v, e;
	cin >> v >> e;
	vector<vector<ll>> l;
	for (int i = 0; i < e; i++) {
		ll x, y, w;
		cin >> x >> y >> w;
		l.pb({w, x, y});
	}
	sort(l.begin(), l.end());


	int ctr = 0;
	DisjointSet ds(v);
	for (int i = 0; i < e; i++) {
		if (ds.Upar(l[i][1]) != ds.Upar(l[i][2])) {
			ds.UnionBySize(l[i][1], l[i][2]);
			ctr += l[i][0];
		}
	}
	cout << ctr << endl;




	return 0;
}