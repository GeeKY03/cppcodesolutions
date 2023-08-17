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

map<ll, ll> dist;

ll v, e;

void SSSP(ll src, ll dest) {
	queue<int> q;
	for (int i = 0; i < v; i++) {
		dist[i] = INT_MAX;
	}
	dist[src] = 0;
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

	cout << "Distance: " << dist[dest] << endl;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> v >> e;

	for (int i = 0; i < e; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}

	SSSP(1, 5);



	return 0;
}