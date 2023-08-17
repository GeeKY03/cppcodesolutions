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
		vi v;
		int o = 0, e = 0;
		int so = INT_MAX, se = INT_MAX;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x & 1) {
				o++;
				so = min(so, x);
			}
			else {
				e++;
				se = min(se, x);
			}
			v.pb(x);
		}
		if (o == n) {
			cout << "YES" << endl;
		}
		else if (e == n) {
			cout << "YES" << endl;
		}
		else if (so < se) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}