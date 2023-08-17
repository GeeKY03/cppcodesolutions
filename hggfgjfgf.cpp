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


// Adjacency List
map<ll, list<ll>> l;

// Visited Array
map<ll, ll> dist;

void BFS(ll src, ll dest) {
	dist[src] = 0;
	queue<int> q;
	q.push(src);
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
	for (int i = 0; i <= 5; i++) {
		cout << dist[i] << endl;
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	// Assuming every Node to be at infinite distance
	for (int i = 0; i < v; i++) {
		dist[i] = INT_MAX;
	}
	BFS(0, 5);



	return 0;
}