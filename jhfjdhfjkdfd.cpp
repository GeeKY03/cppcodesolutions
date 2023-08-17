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
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		vector<int> res;
		int ele = 0;
		for (int i = n - 1; i >= 0; i--) {
			ll ind = n - i - 1;
			int xr = ele ^ v[i - 1];
			if (!i || xr) {
				res.pb(i);
			}
			else {
				res.pb(i - 1);
			}
			ele = ele ^ 1;
		}
		if (v[n - 1] == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			// reverse(res, begin(), res.end());
			vector<int> temp;
			for (int i = n - 1; i >= 0; i--) {
				temp.pb(res[i]);
			}
			for (int i = 0; i < n; i++) {
				cout << temp[i] << " ";
			}
			cout << endl;
		}

	}


	return 0;
}