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
			if (CFC(nbr, node) == true) {
				return true;
			}
		}
		else if ((nbr != parent) && (vis[nbr] == 1)) {
			return true;
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll v;
	cin >> v;
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	bool chk = false;

	for (int i = 1; i <= v; i++) {
		if (vis[i] == 0) {
			if (CFC(i, -1) == true) {
				chk = true;
			}
		}
	}
	if (chk) {
		cout << "Contains a cycle" << endl;
	}
	else {
		cout << "Does not contain a cycle" << endl;
	}


	return 0;
}