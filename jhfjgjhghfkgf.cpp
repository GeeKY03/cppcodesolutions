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
	ll n, q;
	cin >> n >> q;
	ll c1 = 0;
	vlli v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
		if (x == 1) {
			c1++;
		}
	}
	while (q--) {
		ll a, x;
		cin >> a >> x;
		if (a == 1) {
			if (v[x - 1] == 1) {
				c1--;
				v[x - 1] = 0;
			}
			else {
				v[x - 1] = 1;
				c1++;
			}
		}
		else {
			if (x <= c1) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}


	return 0;
}