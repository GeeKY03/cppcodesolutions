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
#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
#endif


	// Your code goes here
	ll n;
	cin >> n;
	cout << n << endl;
	DisjointSet ds(n);
	bool chk = false;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		if (ds.Upar(x) == ds.Upar(y)) {
			chk = true;
		}
		else {
			ds.UnionBySize(x, y);
		}
	}
	if (chk) {
		cout << "Contains a cycle" << endl;
	}
	else {
		cout << "Does not contain a cycle" << endl;
	}




	return 0;
}