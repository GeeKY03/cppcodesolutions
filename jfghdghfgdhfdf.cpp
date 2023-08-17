// Bipartite Checking
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

map<ll, list<ll>>l;
map<ll, ll> vis;
ll odd = 0;

void DFS_BC(ll node, ll parent, ll col ) {
	vis[node] = col;
	if (odd > 0) {
		return;
	}
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS_BC(nbr, node, 3 - col);
		}
		else {
			if ((vis[nbr] == vis[node]) && (nbr != parent)) {
				odd++;
				return;
			}
		}
	}
	if (odd > 0) {
		return;
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	DFS_BC(0, -1, 1);
	if (odd > 0) {
		cout << "Not Bipartite" << endl;
	}
	else {
		cout << "Bipartite" << endl;
	}


	return 0;
}