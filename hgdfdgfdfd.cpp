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

map<ll, list<ll>> rl;

map<ll, ll> vis;

map<ll, ll> rvis;

vector<int> order;

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
	order.pb(node);
}

void RDFS(ll src) {
	rvis[src] = 1;
	cout << src << " ";
	for (auto nbr : rl[src]) {
		if (rvis[nbr] == 0) {
			RDFS(nbr);
		}
	}
}





int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, v;
	cin >> v >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		rl[y].pb(x);
	}

	for (int i = 0; i <= v; i++) {
		if (vis[i] == 0) {
			DFS(i);
		}
	}


	for (int i = v; i >= 0; i--) {
		if (rvis[order[i]] == 0) {
			RDFS(order[i]);
		}
		cout << endl;
	}
	for (auto x : order) {
		cout << x << " ";
	}



	return 0;
}