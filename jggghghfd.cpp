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

map<ll, ll> dfs_vis;

bool res = false;

void CFC(ll node) {
	vis[node] = 1;
	dfs_vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			CFC(nbr);
		}
		else if ((vis[nbr] == 1) && (dfs_vis[nbr] == 1)) {
			res = true;
			return ;
		}
	}
	dfs_vis[node] = 0;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	ll v, n;
	cin >> v >> n;

	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
	}
	for (int i = 0; i < v; i++) {
		if (vis[i] == 0) {
			CFC(i);
		}
	}
	if (res) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


	return 0;
}