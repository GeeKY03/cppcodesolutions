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
		vector<int> v(n);
		if (n == 1) {
			cout << 1 << endl;
		}
		else {
			int ctr = 4;
			for (int i = 1; i < n - 1; i++) {
				if (i != n / 2) {
					v[i] = ctr++;
				}
				else {
					continue;
				}
			}
			// for (int i = 1; i <= n; i++) cin >> a[i];
			// ll ans = 0;
			// for (int i = 1; i <= n; i++) ans = max(ans, a[i]);
			v[0] = 2, v[n - 1] = 3, v[n / 2] = 1;
			for (auto x : v) {
				cout << x << " ";
			}
			cout << endl;
		}
	}


	return 0;
}