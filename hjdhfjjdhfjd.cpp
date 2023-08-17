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
		ll n, m;
		cin >> n >> m;
		vlli a, p;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x );
		}
		for (int i = 0; i < m; i++) {
			ll x;
			cin >> x;
			x--;
			p.pb(x);
		}
		sort(all(p));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[p[j] + 1] < a[p[j]]) {
					swap(a[p[j]], a[p[j] + 1]);
				}
			}
		}
		bool chk = true;
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				chk = false;
			}
		}
		if (chk) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}