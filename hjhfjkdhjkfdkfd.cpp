#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


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
		ll num = v[0];
		for (int i = 1; i < n; i++) {
			num = __gcd(num, v[i]);
		}
		if (num == 1) {
			cout << 0 << endl;
		}
		else {
			vector<int> vp;
			for (ll i = 0; i < n; i++) {
				vlli temp = v;
				temp[i] = __gcd(i + 1, temp[i]);
				ll ans = temp[0];
				for (int j = 1; j < n; j++) {
					ans = __gcd(ans, temp[j]);
				}
				if (ans == 1) {
					vp.pb(n - i);
				}
			}
			sort(vp.begin(), vp.end());
			cout << vp[0] << endl;
		}
	}


	return 0;
}