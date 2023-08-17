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
		vlli res;
		int i2 = 0;
		for (int i = 0; i < n - 1; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		bool done = false;
		if (n == 2) {
			cout << v[0] << " " << 0 << endl;
		}
		else if (n == 3) {
			cout << v[0] << " " << 0 << " " << v[1] << endl;
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				if (i == 0) {
					if ((v[i] == v[i + 1]) && (v[i] != v[i + 2])) {
						res.pb(0);
						res.pb(v[i]);
						i2 = 1;
					}
					else if (max(v[i], v[i + 1]) == v[i]) {
						res.pb(v[i]);
						res.pb(v[i + 1]);
						i++;
						i2 = 1;
					}
					else {
						res.pb(v[i]);
						res.pb(0);
						done = true;
						i2 = 1;
					}
				}
				else {
					if ((max(0LL, res[i2]) == v[i]) ) {
						res.pb(0);
						i2++;
					}
					else if (max(v[i], res[i2]) == v[i]) {
						res.pb(v[i]);
						i2++;
					}
					else {
						res.pb(0);
						res.pb(v[i]);
						done = true;
						i2++;
					}
				}
			}
			for (auto x : res) {
				cout << x << " ";
			}
			if ((done == false) && res.size() < n) {
				cout << 0 ;
			}
			cout << endl;
		}
	}


	return 0;
}