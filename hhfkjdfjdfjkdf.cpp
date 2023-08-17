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

// Adjacency list
map<ll, list<ll>> l;

// To store distances
map<ll, ll> dist;

void BFS_SSSP(ll src, ll dest) {
	queue<ll> q;
	q.push(src);
	// Asuming every node to be at infinite distance from src
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
	cout << dist[dest] << endl;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll N;
	cin >> N;
	ll arr[2 * N];
	for (int i = 0; i < 2 * N; i++) {
		cin >> arr[i];
	}
	ll jump[50] = {0};
	for (int i = 0; i < 2 * N; i += 2) {
		ll src = arr[i], dest = arr[i + 1], jp = arr[i + 1] - arr[i];
		jump[src] = jp;
	}
	for (int i = 1; i <= 30; i++) {
		for (int dice = 1; dice <= 6; dice++) {
			ll j = i + dice;
			j += jump[j];
			if ((j >= 0) && (j <= 30)) {
				l[i].pb(j);
			}
		}
	}
	l[30].pb(30);
	BFS_SSSP(1, 30);




	return 0;
}