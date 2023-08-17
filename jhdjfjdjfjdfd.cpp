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
#define w(x) ll x;cin>>x;while(x--)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

map<ll, list<ll>> l;
vi vis(300005, 0);
ll odd_cyc = 0;

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = (res * a) % 998244353 /* %m*/ ;
		}
		a = (a * a * 1LL) % 998244353 /* %m */ ;
		b >>= 1;
	}
	return res;
}


void DFS(ll node, ll &oc, ll &ec, ll parent, ll par) {
	vis[node] = par;
	if (par & 1) {
		oc++;
	}
	else {
		ec++;
	}
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			DFS(nbr, oc, ec, node, 3 - par);
		}
		else if ((nbr != parent) && (vis[nbr] == par)) {
			odd_cyc++;
			return;
		}
	}
}



int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		l.clear();
		vis.clear();
		vis.resize(300005, 0);
		for (int i = 0; i < m; i++) {
			ll x, y;
			cin >> x >> y;
			l[x].pb(y);
			l[y].pb(x);
		}
		ll res = 1;
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 0) {
				// B_C(i, -1, 1);
				// visbc.clear();
				ll oc = 0, ec = 0;
				DFS(i, oc, ec, -1, 1);
				if (odd_cyc == 0) {
					res = (res * ((binexp(2, oc) + binexp(2, ec)))) % 998244353;
				}
				else {
					break;
				}
			}
		}
		if (odd_cyc == 0) {
			cout << res << endl;
		}
		else {
			cout << 0 << endl;
			odd_cyc = 0;
		}
	}


	return 0;
}