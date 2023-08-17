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

ll n, res;

void BFS(ll src, ll dest) {
	queue<int> q;
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
	res = dist[dest];
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> n;
	ll jump[31] = {0};
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		jump[x] = y - x;
	}
	for (int i = 1; i <= 30; i++) {
		for (int dice = 1; dice <= 6; dice++) {
			ll j = i + dice;
			j += jump[j];
			if ((j <= 30) && (j >= 1)) {
				l[i].push_back(j);
			}
		}
	}
	l[30].pb(30);
	for (auto x : l) {
		cout << x.ff << ": ";
		for (auto y : x.ss) {
			cout << y << " ";
		}
		cout << endl;
	}

	BFS(1, 30);
	cout << res << endl;



	return 0;
}