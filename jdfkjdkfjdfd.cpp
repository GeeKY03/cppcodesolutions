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
		vi v;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			mp[x]++;
		}
		ll ptr1 = 0, ptr2 = 1;
		ll ctr1 = 0;
		while (ptr2 <= n - 1) {
			ll x = v[ptr1] ^ v[ptr2];
			// cout << ptr1 << " " << ptr2 << endl;
			// cout << x << " ";
			if (x > 1) {
				ptr2++;
				ctr1++;
			}
			else {
				ptr1 = ptr2;
				ptr2 = ptr1 + 1;
			}
		}
		// cout << ctr1 << endl;
		ll ctr2 = 0;
		ptr1 = n - 1, ptr2 = n - 2;
		while (ptr2 >= 0) {
			ll x = (v[ptr1] ^ v[ptr2]);
			if (x > 1) {
				ptr2--;
				ctr2++;
			}
			else {
				ptr1 = ptr2;
				ptr2 = ptr1 - 1;
			}
		}
		// cout << ctr2 << endl;
		ll num = 0;
		for (auto x : mp) {
			ll y = x.second;
			if (num < y) {
				num = y;
			}
		}
		cout << min(ctr1, min(ctr2, n - num)) << endl;
	}


	return 0;
}