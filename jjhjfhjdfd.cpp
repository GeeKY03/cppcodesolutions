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
map<int, list<int>> l;
// visited array
map<int, int> dis;

void BFSSSSP(int src, int v) {
	for (int i = 0; i < v; i++) {
		dis[i] = INT_MAX;
	}

	queue<int> q;
	dis[src] = 0;
	q.push(src);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			if (dis[nbr] == INT_MAX) {
				q.push(nbr);
				dis[nbr] = dis[node] + 1;
			}
		}
	}
	for (int i = 0; i < v; i++) {
		cout << i << ": " << dis[i] << endl;
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
		int x, y;
		cin >> x >> y;
		l[x].push_back(y);
		l[y].push_back(x);
	}

	// Now let's say the origin is 0, it cabn be any node tho
	BFSSSSP(0, v);



	return 0;
}