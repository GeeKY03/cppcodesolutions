#include<bits/stdc++.h>
using namespace std;
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


ll DFS(ll src, ll ctr, vector<int> &vis, vector<set<ll>> l) {
	if (vis[src] == 1) {
		return ctr;
	}
	vis[src] = 1;
	ctr++;
	for (auto nbr : l[src]) {
		if (vis[nbr] == 0) {
			DFS(nbr, ctr, vis, l);
		}
	}
	return ctr;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vector<set<ll>> l(n + 1);
	vi vis(n + 1, 0);
	// no of edge relations
	ll y;
	cin >> y;
	l[0].insert(0);
	for (int i = 0; i < y; i++) {
		ll a, b;
		cin >> a >> b;
		l[a].insert(b);
		l[b].insert(a);
	}
	for (int i = 0; i <= n; i++) {
		cout << i << ": ";
		for (auto x : l[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
	// vi v;
	// for (int i = 0; i <= n; i++) {
	// 	if (vis[i] == 0) {
	// 		v.pb(DFS(i, 0, vis, l));
	// 	}
	// }
	// for (auto x : v) {
	// 	cout << x << " ";
	// }
	cout << DFS(1, 0, vis, l) << endl;



	return 0;
}