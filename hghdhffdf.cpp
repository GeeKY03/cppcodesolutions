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
map<int, int> vis;

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vector<pair<pair<int, int>, int>> vp;
	for (int i = 0; i < n; i++) {
		ll x, y, r;
		cin >> x >> y >> r;
		vp.pb({{x, y}, r});
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ll x1 = vp[i].ff.ff, y1 = vp[i].ff.ss, r1 = vp[i].ss;
			ll x2 = vp[j].ff.ff, y2 = vp[j].ff.ff, r2 = vp[j].ss;
			long long temp = (x2 - x1) * (x2 - x1) * 1LL;
			temp += (y2 - y1) * (y2 - y1) * 1LL;
			double dist = sqrt(temp);
			if (int(dist) >= r1) {
				l[i].pb(j);
			}
			if (int(dist) >= r2) {
				l[j].pb(i);
			}
		}
	}

	ll res = 1;
	for (int i = 0; i < n; i++) {
		vis.clear();
		dfs(i, -1);
		int ctr = 0;
		for (int j = 0; j < n; j++) {

		}
	}


	return 0;
}