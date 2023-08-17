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
		string s;
		cin >> s;
		// cout << s << endl;
		ll c1 = 0, c0 = 0;
		ll mx = 0;
		ll ctr = 1;
		vector<ll> v;
		if (s[0] == '0') {
			c0++;
		}
		else {
			c1++;
		}
		for (int i = 1; i < n; i++) {
			if (s[i] != s[i - 1]) {
				mx = max(mx, ctr);
				ctr = 1;
			}
			else {
				ctr++;
				if (i == n - 1) {
					mx = max(mx, ctr);
				}
			}
			if (s[i] == '0') {
				c0++;
			}
			else {
				c1++;
			}
		}
		// cout << c1 << " " << c0 << endl;
		ll ans1 = c1 * c0 * 1LL;
		ll ans2 = mx * mx * 1LL;
		if (n == 1) {
			cout << 1 << endl;
		}
		else {
			cout << max(ans1, ans2) << endl;
		}


	}


	return 0;
}