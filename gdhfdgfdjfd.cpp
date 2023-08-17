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
		n *= 2;
		map<ll, ll> mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
		}
		vi v;
		for (auto x : mp) {
			v.pb(x.second);
		}
		// for (auto x : v) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		if (v.size() == 1) {
			cout << "NO" << endl;
		}
		else {
			sort(v.rbegin(), v.rend());
			ll a = v[0];
			ll sum = 0;
			for (int i = 1; i < v.size(); i++) {
				sum += v[i];
			}
			if (a > sum) {
				cout << "NO" << endl;
			}
			else {
				cout << "YES" << endl;
			}
		}
	}


	return 0;
}