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

vector<int> cat(100005, 0);
map<ll, list<ll>> l;
map<ll, ll> vis, cons;

void BFS(ll src, ll ctr) {
	vis[src] = 1;
	if (cat[src] == 1) {
		cons[src] = 1;
	}
	queue<int> q;
	q.push(src);
	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			if (vis[nbr] == 0) {
				q.push(nbr);
				vis[nbr] = 1;
				if ((cat[node] == 1) && (cat[nbr] == 1)) {
					cons[nbr] = cons[node] + 1;
				}
				else if ((cat[nbr] == 1) && (cat[node] == 0)) {
					cons[nbr] = 1;
				}
				else {
					cons[nbr] = cons[node];
				}
			}
		}
	}
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll c, n;
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		if (x == 1) {
			cat[i] = 1;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	BFS(1, 0);
	ll ctr = 0;
	// for (auto x : cons) {
	// 	cout << x.ff << ": " << x.ss << endl;
	// }
	for (int i = 2; i <= n; i++) {
		if (l[i].size() == 1) {
			if (cons[i] <= c) {
				ctr++;
			}
		}
	}
	cout << ctr << endl;



	return 0;
}