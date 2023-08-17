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


ll count(ll node, ll dest, ll ctr, vector<ll> &v) {
	ctr++;
	if (node == dest) {
		return ctr;
	}
	else {
		return count(v[node - 1], dest, ctr, v);
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
		ll n;
		cin >> n;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		vlli res;
		for (int i = 0; i < n; i++) {
			res.pb(count(v[i], i + 1, 0, v));
		}
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}