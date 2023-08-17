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
		set<ll> sett;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			sett.insert(x);
			v.pb(x);
		}
		ll num = v[0];
		for (int i = 1; i < n; i++) {
			num = (num ^ v[i]);
		}
		vlli b;
		for (int i = 0; i < n; i++) {
			b.pb(num ^ v[i]);
		}
		ll chk = b[0];
		for (int i = 1; i < n; i++) {
			chk = (chk ^ b[i]);
		}
		if (chk == 0) {
			cout << num << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}