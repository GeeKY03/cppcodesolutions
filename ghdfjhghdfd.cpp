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

// SSSP using BFS

map<ll, list<ll>> l;

map<ll, ll> dist;

void BFS(ll src, ll dest) {
	queue<int> q;
	q.push(src);
	for (int i = 1; i <= 30; i++) {
		dist[i] = INT_MAX;
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
	ll n;
	cin >> n;
	ll jump[50] = {0};
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		jump[x] = y - x;
	}

	for (int i = 1; i <= 30; i++) {
		for (int dice = 1; dice <= 6; dice++) {
			ll j = i + dice;
			j += jump[j];
			l[i].pb(j);
		}
	}

	// for (auto x : l) {
	// 	cout << x.ff << "-> ";
	// 	for (auto y : x.ss) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }
	l[30].pb(30);



	BFS(1, 30);



	return 0;
}