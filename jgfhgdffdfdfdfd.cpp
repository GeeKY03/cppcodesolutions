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
	ll n, l, r, x;
	cin >> n >> l >> r >> x;
	vlli v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll num = (1 << n) - 1;
	ll res = 0;
	for (int i = 3; i <= num; i++) {
		ll temp = i;
		string s;
		while (temp > 0) {
			if (temp & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			temp >>= 1;
		}
		ll mx = 0, mn = 1000000, sum = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				sum += v[i];
				mx = max(mx, v[i]);
				mn = min(mn, v[i]);
			}
		}
		if ((sum >= l) && (sum <= r)) {
			if (abs(mx - mn) >= x) {
				res++;
			}
		}
	}
	cout << res << endl;


	return 0;
}