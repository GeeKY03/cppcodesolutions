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

vector<int> cat;
map<ll, list<ll>> l;
map<ll, ll> vis, cons;

void DFS(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			if (cat[nbr] == 1) {
				if (cat[node] == 1) {
					cons[nbr] += 1;
				}
			}
		}
	}
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	cat.pb(0);
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		cat.pb(x);
	}
	for (int i = 0; i < n - 1; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	for (int i = 0; i < n; i++) {
		if (l[i + 1].size() == 1) {
			DFS(i);
		}
	}



	return 0;
}