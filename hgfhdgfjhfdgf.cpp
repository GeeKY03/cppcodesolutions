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

vlli res;

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
	res.pb(node);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[y].pb(x);
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			DFS(i);
		}
	}
	for (auto x : res) {
		cout << x << " ";
	}

	return 0;
}