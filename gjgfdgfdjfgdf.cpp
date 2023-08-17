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
map<ll, ll>dist;

void SSSP(int src) {
	// To perform level ordered traversal
	queue<ll> q;
	q.push(src);
	for (auto x : l) {
		dist[x.ff] = INT_MAX;
	}
	dist[src] = 0;
	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			if (dist[nbr] == INT_MAX) {
				q.push(nbr);
				dist[nbr] = dist[node] + 1;
			}
		}
	}
	for (auto x : dist) {
		cout << x.ff << ": " << x.ss << endl;
	}

}


int main() {
	FastIO
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		// assuming bi-directional edges
		l[x].pb(y);
		l[y].pb(x);
	}
	SSSP (0);


	return 0;
}