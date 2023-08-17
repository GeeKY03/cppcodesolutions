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
map<ll, vector<ll>> l2;
ll vis[N] = {0};

void DFS(ll src) {
	if (vis[src] == 1) {
		return ;
	}
	vis[src] = 1;
	// ctr++;
	cout << src << " ";
	for (auto nbr : l2[src]) {
		if (vis[nbr] == 0) {
			DFS(nbr);
		}
	}
}
int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	map<ll, vector<ll> > l;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l2[x].pb(y);
		l2[y].pb(x);
		l[i + 1].pb(x);
		l[i + 1].pb(y);
	}
	// for (auto x : l) {
	// 	cout << x.ff << ": ";
	// 	for (auto y : x.ss) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	vi v1;
	for (auto nbr : l[1]) {
		v1.pb(nbr);
	}
	bool chk1 = false;
	// 1st neighbour
	ll fnbr = v1[0];
	for (auto x : l[fnbr]) {
		if (x == v1[1]) {
			chk1 = true;
		}
	}
	if (chk1 == false) {
		vis[1] = 1;
		cout << 1 << " ";
		DFS(v1[1]);
	}
	else {
		vis[1] = 1;
		cout << 1 << " ";
		DFS(v1[0]);
	}

	// print l2
	// for (auto x : l2) {
	// 	cout << x.ff << ": ";
	// 	for (auto y : x.ss) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }



	return 0;
}