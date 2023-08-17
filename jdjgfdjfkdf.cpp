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
		sort(v.begin(), v.end());
		ll a = v[0];
		ll b = v[n - 1];
		map<ll, ll> mp;
		for (int i = 0; i < n; i++) {
			mp[v[i]]++;
		}
		ll ca = 0, cb = 0;
		for (auto x : mp) {
			if (x.first == a) {
				ca = x.second;
			}
			if (x.first == b) {
				cb = x.second;
			}
		}
		if (a == b) {
			cout << ca*(ca - 1) << endl;
		}
		else {
			cout << ca*cb * 2 << endl;
		}
	}


	return 0;
}