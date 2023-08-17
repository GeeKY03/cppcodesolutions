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

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> adj[n + 1];
	for (int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		adj[a].pb({b, w});
		adj[b].pb({a, w});
	}
	int k;
	cin >> k;
	vector<int> v(n + 1, -1);
	priority_queue <pair<int, int>>  pq;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		v[a] = b;
		pq.push({b, a});
	}
	while (!pq.empty()) {
		int w = pq.top().first;
		int node = pq.top().second;
		pq.pop();
		for (auto i : adj[node]) {
			int newnode = i.first;
			int len = i.second;
			if (w - len > v[newnode]) {
				v[newnode] = w - len;
				pq.push({v[newnode], newnode});
			}
		}
	}
	int cnt = 0;
	for ( int i = 0; i <= n; i++) {
		if (v[i] >= 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	solve();



	return 0;
}