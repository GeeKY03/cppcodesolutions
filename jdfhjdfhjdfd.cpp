//Task:  Create DFS on your own
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

const int N = 2e+5;
map<ll, set<ll>> l;
ll vis[N] = {0};

ll DFS(ll src, ll ctr) {
	if (vis[src] == 1) {
		return ctr;
	}
	vis[src] = 1;
	ctr++;
	for (auto nbr : l[src]) {
		if (vis[nbr] == 0) {
			DFS(nbr, ctr);
		}
	}
}


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, p;
	cin >> n >> p;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].insert(y);
		l[y].insert(x);
	}
	vi v;
	// for (ll i = 0; i <= n; i++) {
	// 	if (vis[i] != 1) {
	// 		ll ctr = 0;
	// 		ll x = DFS(i, ctr);
	// 		v.pb(x);
	// 	}
	// }
	for (auto x : l) {
		cout << x.ff << ": ";
		for (auto y : x.ss) {
			cout << y << " ";
		}
		cout << endl;
	}
	cout << DFS(0, 0) << endl;




	return 0;
}