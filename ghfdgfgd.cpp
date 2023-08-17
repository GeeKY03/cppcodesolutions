// Dijkstra's Algorithm using prority_queue

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

map<ll, list<pair<ll, ll>>> l;

map<ll, ll> dist;

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		ll x, y, w;
		cin >> x >> y >> w;
		l[x].pb({w, y});
		l[y].pb({w, x});
	}

	priority_queue<pair<int, int>> pq;

	for (int i = 0; i < v; i++) {
		if (i == 1) {
			dist[i] = 0;
		}
		else {
			dist[i] = INT_MAX;
		}
	}

	pq.push({0, 1});

	while (!pq.empty()) {
		pair<int, int> p = pq.top();
		pq.pop();
		ll node = p.second;
		ll d = p.first;
		for (auto nbr : l[node]) {
			if (dist[nbr.second] > d + nbr.first) {
				dist[nbr.second] = d + nbr.first;
				pq.push({d + nbr.first, nbr.second});
			}
		}
	}

	for (int i = 0; i < v; i++) {
		cout << i << ": " << dist[i] << endl;
	}



	return 0;
}