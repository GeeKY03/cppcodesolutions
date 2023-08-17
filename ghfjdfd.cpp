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


map<ll, list<ll>>l;
map<ll, ll> vis;
vlli order;
void topo(ll node) {
	vis[node] = 1;
	for (auto nbr : l[node]) {
		if (vis[nbr] == 0) {
			topo(nbr);
		}
	}
	order.pb(node);
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vector<ll> v;
	map<ll, ll> mp;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
		mp[x]++;
	}
	for (int i = 0; i < n; i++) {
		ll x = v[i];
		if (mp[x * 3] > 0) {
			l[x * 3].pb(x);
		}
		if (x % 2 == 0) {
			if (mp[x / 2] > 0) {
				l[x / 2].pb(x);
			}
		}
	}

	// for (auto x : l) {
	// 	cout << x.ff << ": ";
	// 	for (auto y : l[x.ff]) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }
	for (int i = 0; i < n; i++) {
		if (vis[v[i]] == 0) {
			topo(v[i]);
		}
	}
	reverse(all(order));
	for (auto x : order) {
		cout << x << " ";
	}
	cout << endl;



	return 0;
}