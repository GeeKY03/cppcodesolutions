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
map<ll, ll> vis1, vis2;
ll cost = 0, mcnode = 0;
vlli v;
vector<pair<int, int>> vp;

void process(ll node) {
	if (cost > v[node - 1]) {
		cost = v[node - 1];
		mcnode = node;
	}
}

void DFS1(ll node, ll num) {
	vis1[node] = 1;
	if (num == 1) {
		process(node);
	}
	for (auto nbr : l[node]) {
		if (vis1[nbr] == 0) {
			if (num == 1) {
				DFS1(nbr, 1);
			}
			else {
				DFS1(nbr, 0);
			}
		}
	}
}

// void DFS2(ll node) {
// 	vis2[node] = 1;
// 	for (auto nbr : l[node]) {
// 		if (vis2[nbr] == 0) {
// 			DFS2(nbr);
// 		}
// 	}
// }

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	ll res = 0;
	for (int i = 1; i <= n; i++) {
		if (vis1[i] == 0) {
			cost = v[i - 1];
			mcnode = i;
			DFS1(i, 1);
			// cout << cost << " " << mcnode << endl;
			// break;
			DFS1(mcnode, 0);
			res += cost;
		}
	}
	cout << res << endl;




	return 0;
}