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
	}

	for (auto x : l) {
		cout << x.ff << " : ";
		for (auto y : x.ss) {
			cout << y << " ";
		}
		cout << endl;
	}

	DFS(0);

	for (auto x : order) {
		cout << x << " ";
	}

	// Let's make a reverse graph

	for (auto x : l) {
		for (auto y : x.ss) {
			rl[y].pb(x.ff);
		}
	}
	cout << endl;

	for (auto x : rl) {
		cout << x.ff << " : ";
		for (auto y : x.ss) {
			cout << y << " ";
		}
		cout << endl;
	}



	return 0;
}