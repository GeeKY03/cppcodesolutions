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

ll deg[1000005] = {0};

map<ll, ll > vis;

bool CFC(ll node, ll parent) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if ((vis[nbr] == 0) && (deg[nbr] == 2)) {
			if (CFC(nbr, node)) {
				return true;
			}
		}
		else if ((nbr != parent) && (vis[nbr] == 1) && (deg[nbr] == 2) && (deg[node] == 2)) {
			return true;
		}
	}
	return false;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		deg[x]++;
		deg[y]++;
		l[x].pb(y);
		l[y].pb(x);
	}
	ll ctr = 0;
	for (ll i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			bool res = false;
			if (deg[i] == 2) {
				res = CFC(i, -1);
			}
			if (res == true) {
				ctr++;
			}
		}
	}
	cout << ctr << endl;


	return 0;
}