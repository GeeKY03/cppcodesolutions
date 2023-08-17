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
		ll n, k, H, A;
		cin >> n >> k >> H >> A;
		vlli h, a;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			h.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		ll res = 0;
		for (int i = 0; i < n; i++) {
			ll ar = 0; //attacks required by kratos or whoever tf he is
			if (h[i] % A == 0) {
				ar = h[i] / A;
			}
			else {
				ar = h[i] / A;
				ar++;
			}
			ll dk = 0; // hits he will take
			dk = (ar - 1) * a[i];
			if ((dk > 0) && (k > 0)) {
				k--;
				res = i;
			}
			else if (H <= dk) {
				if (k > 0) {
					k--;
					res = i;
				}
				else {
					res = i - 1;
					break;
				}
			}
			else {
				H -= dk;
				res = i;
			}
		}
		if (res == n - 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}