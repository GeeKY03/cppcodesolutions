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

ll DFS(ll node, ll &ctr) {
	vis[node] = 1;
	ctr++;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr, ctr);
		}
	}
	return ctr;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}

	ll num = (n * (n - 1)) / 2;
	for (int i = 0; i < n; i++) {
		ll ctr = 0;
		if (vis[i] == 0) {
			ctr = DFS(i, ctr);
		}
		// cout << ctr << endl;
		num -= ((ctr - 1) * ctr) / 2;
	}
	cout << num << endl;


	return 0;
}