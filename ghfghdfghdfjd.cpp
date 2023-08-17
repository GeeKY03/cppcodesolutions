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
map<ll, ll> vis, rvis;

vector<ll> order;

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
	order.pb(node);
}

void DFS2(ll node) {
	rvis[node] = 1;
	for (auto nbr : l[node]) {
		if (rvis[nbr] == 0) {
			DFS2(nbr);
		}
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
		// Bidirectional
		l[x].pb(y);
		l[y].pb(x);
	}
	for (int i = 1; i <= v; i++) {
		if (vis[i] == 0) {
			DFS(i);
		}
	}
	reverse(all(order));
	ll ctr = 0;
	for (int i = 0; i < v; i++) {
		if (rvis[order[i]] == 0) {
			DFS2(order[i]);
			ctr++;
		}
	}
	cout << ctr << endl;




	return 0;
}