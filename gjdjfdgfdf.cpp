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

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vector<pair<ll, ll>> vp;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		vp.pb({x, y});
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((vp[i].ss == vp[j].ss) || (vp[i].ff == vp[j].ff)) {
				l[i].pb(j);
				l[j].pb(i);
			}
		}
	}
	ll ctr = 0;
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			DFS(i);
			ctr++;
		}
	}
	cout << ctr - 1 << endl;


	return 0;
}