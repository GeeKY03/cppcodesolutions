#include<bits/stdc++.h>
using namespace std;
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

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a /* %m*/ ;
		}
		a = a * a /* %m */ ;
		b >>= 1;
	}
	return res;
}


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, x;
		cin >> n >> x;
		if (n == 0) {
			if (x == 0) {
				cout << 0 << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (x > n) {
			cout << -1 << endl;
		}
		else if (n == x) {
			cout << x << endl;
		}
		else if (x & 1) {
			if (x == n) {
				cout << n << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			vector<ll> target, str1, str2;
			ll temp = n;
			for (int i = 0; i < 65; i++) {
				if (temp & 1) {
					str1.pb(1);
					str2.pb(1);
				}
				else {
					str1.pb(0);
					str2.pb(0);
				}
				temp >>= 1;
			}
			temp = x;
			for (int i = 0; i < 65; i++) {
				if (temp & 1) {
					target.pb(1);
				}
				else {
					target.pb(0);
				}
				temp >>= 1;
			}
			bool res = true;
			ll sz = target.size();
			ll ctr = 0;
			for (int i = sz - 1; i >= 0; i--) {
				if ((str1[i] == 0) && (target[i] == 1)) {
					res = false;
					break;
				}
				else {
					if ((str1[i]&str2[i]) == target[i]) {
						continue;
					}
					else {
						if (ctr == 0) {
							for (int j = i; j < sz; j++) {
								if (str2[j] == 0) {
									swap(str2[j], str2[i]);
									ctr++;
									break;
								}
							}
						}
						else {
							str2[i] = 0;
						}
					}
				}
			}
			// reverse(str2.begin(), str2.end());
			if (res) {
				ll ans = 0;
				for (int i = 0; i < 65; i++) {
					if (str2[i] == 1) {
						ans += binexp(2, i);
					}
				}
				ll mk2 = 1;
				while (mk2 <= n) {
					mk2 *= 2;
				}
				if (ans > mk2) {
					cout << -1 << endl;
				}
				else {
					cout << ans << endl;
				}
			}
			else {
				cout << -1 << endl;
			}
		}
	}


	return 0;
}