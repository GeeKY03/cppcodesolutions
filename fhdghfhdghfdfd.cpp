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
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		sort(all(v));
		ll num = v[n - 1] - v[0];
		if ((abs(v[n - 1]) > abs(num)) || (abs(v[0]) > abs(num))) {
			cout << "NO" << endl;
		}
		else {
			ll i = 0, j = n - 1;
			ll sum = 0;
			bool chk = true;
			vlli res;
			while (i <= j) {
				if (v[j] + sum < num) {
					sum += v[j];
					res.pb(v[j]);
					j--;
				}
				while ((v[j] + sum >= num) && (i <= j)) {
					sum += v[i];
					res.pb(v[i]);
					i++;
				}
				if (sum >= num) {
					chk = false;
				}
			}
			if (chk) {
				cout << "YES" << endl;
				for (auto x : res) {
					cout << x << " ";
				}
				cout << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}


	return 0;
}