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
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
		}
		vi res;
		if (mp[0] == 0) {
			for (int i = 0; i < n; i++) {
				res.pb(0);
			}
		}
		else {
			vi temp;
			ll mx = mp[0];
			for (int i = 1; i < n; i++) {
				if (mp[i] < mx) {
					ll diff = mx - mp[i];
					for (int j = 0; j < diff; j++) {
						temp.pb(i);
					}
					mx = mp[i];
					if (i == n - 1) {
						temp.pb(i + 1);
					}
				}
			}
			int sum = 0;
			reverse(all(temp));
			for (int i = 0; i < temp.size(); i++) {
				res.pb(temp[i]);
				sum += res[i];
			}
			for (int i = 0; i < n - sum; i++) {
				res.pb(0);
			}
		}
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}