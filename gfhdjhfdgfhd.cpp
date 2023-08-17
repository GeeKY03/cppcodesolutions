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
	vector<int> parent, size;
public:
	DisjointSet(int n) {
		parent.resize(n + 1);
		size.resize(n + 1);
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

	void UnionBySize(int x, int y) {
		int Upar_x = Upar(x);
		int Upar_y = Upar(y);

		if (size[Upar_x] > size[Upar_y]) {
			parent[Upar_y]  = Upar_x;
			size[Upar_x] += size[Upar_y];
		}
		else if (size[Upar_x] < size[Upar_y]) {
			parent[Upar_x] = Upar_y;
			size[Upar_y] += size[Upar_x];
		}
		else {
			parent[Upar_y] = Upar_x;
			size[Upar_x] += size[Upar_y];
		}
	}
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	DisjointSet ds(7);
	ds.UnionBySize(1, 2);
	ds.UnionBySize(2, 3);
	ds.UnionBySize(4, 5);
	ds.UnionBySize(6, 7);
	ds.UnionBySize(5, 6);

	if (ds.Upar(3) == ds.Upar(7)) {
		cout << "Same" << endl;
	}
	else {
		cout << "Not same" << endl;
	}

	ds.UnionBySize(3, 7);

	if (ds.Upar(3) == ds.Upar(7)) {
		cout << "Same" << endl;
	}
	else {
		cout << "Not same" << endl;
	}



	return 0;
}