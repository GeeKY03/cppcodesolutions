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

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1LL;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a * 1LL /* %m*/ ;
		}
		a = a * a * 1LL /* %m */ ;
		b >>= 1;
	}
	return res * 1LL;
}

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
		if (n & 1) {
			ll temp = n;
			string res;
			while (temp > 0) {
				if (temp & 1) {
					res.pb('1');
				}
				else {
					res.pb('0');
				}
				temp >>= 1;
			}
			// cout << res << endl;
			if (res.size() > 41) {
				cout << -1 << endl;
			}
			else {
				ll sz = res.size();
				cout << sz - 1 << endl;
				for (int i = sz - 1; i >= 1; i--) {
					if (res[i] == '1') {
						cout << 2 << " ";
					}
					else {
						cout << 1 << " ";
					}
				}
				cout << endl;
			}
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}