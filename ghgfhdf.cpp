// Snake and Ladder problem

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

map<ll, ll> jump;

// Adjacency list
map<ll, list<ll>> l;

map<ll, ll> dist;

map<ll, ll> parent;

void BFS_SSSP(ll src, ll dest) {

	// Assuming every node is at INT_MAX distance from source node
	for (int i = 1; i <= 36; i++) {
		dist[i] = INT_MAX;
	}
	queue<int> q;
	q.push(src);
	dist[src] = 0;
	parent[src] = src;

	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			if (dist[nbr] == INT_MAX) {
				q.push(nbr);
				dist[nbr] = dist[node] + 1;
				parent[nbr] = node;
			}
		}
	}
	cout << dist[36] << endl;

	// Print the path
	ll temp = 36;
	while (temp != src) {
		cout << temp << " <- ";
		temp = parent[temp];
	}
	cout << src << endl;

}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll s, lad;
	cin >> s >> lad;
	for (int i = 0; i < s + lad; i++) {

		ll s, e;
		cin >> s >> e;
		jump[s] = e - s;
	}
	for (int i = 0; i <= 36; i++) {
		for (int dice = 1; dice <= 6; dice++) {
			ll x = i + dice;
			x += jump[x];
			l[i].pb(x);
		}
	}
	BFS_SSSP(0, 36);


	return 0;
}