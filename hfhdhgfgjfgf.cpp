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

map<ll, set<ll>> l;

priority_queue<int, vector<int>, greater<int>> pq;


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	ll vis[n + 5] = {0};
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].insert(y);
		l[y].insert(x);
	}
	pq.push(1);
	vis[1] = 1;
	while (!pq.empty()) {
		ll node = pq.top();
		cout << node << " ";
		pq.pop();
		for (auto nbr : l[node]) {
			if (vis[nbr] == 0) {
				pq.push(nbr);
				vis[nbr] = 1;
			}
		}
	}


	return 0;
}