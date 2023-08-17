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
	ll n;
	cin >> n;
	vlli v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	if (n == 0) {
		cout << 0 << endl;
	}
	else {
		ll l_b = v[0];
		ll l_u = 0;
		for (int i = 1; i < n; i++) {
			ll b_c = l_u + v[i];
			ll u_c = max(l_b, l_u);
			l_b = b_c;
			l_u = u_c;
		}
		cout << max(l_b, l_u) << endl;
	}


	return 0;
}