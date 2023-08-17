// Bipartite check of agraph
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

ll odd_cycle = 0;

void B_C(ll node, ll parent, ll col) {
	vis[node] = col;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			B_C(nbr, node, 3 - col);
		}
		else if ((nbr != parent) && (col == vis[nbr])) {
			odd_cycle++;
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll v, n;
	cin >> v >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}

	for (int i = 1; i <= v; i++) {
		if (vis[i] == 0) {
			B_C(i, -1, 1);
		}
	}

	if (odd_cycle > 0) {
		cout << "Not Bipartite" << endl;
	}
	else {
		cout << "Bipartite" << endl;
	}


	return 0;
}