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

map<ll, ll> vis;

bool CFC(ll node, ll parent) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			if (CFC(nbr, node)) {
				return true;
			}
		}
		else if ((vis[nbr] != 0) && (nbr != parent)) {
			return true;
		}
	}
}



int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n; // No of nodes
	ll adj;
	cin >> adj;
	for (int i = 0; i < adj; i++) {
		ll x, y;
		cin >> x >> y;
		// Assuming bi-directional edges
		l[x].pb(y);
		l[y].pb(x);
	}
	bool chk = false;
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			if (CFC(i, -1)) {
				chk = true;
			}
		}
	}
	if (chk) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}




	return 0;
}