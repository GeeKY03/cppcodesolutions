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
		cin >> n ;
		vlli v;
		ll res = 0, fres = 0;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
			v.pb(x);
		}
		vlli v2;
		for (int i = 0; i <= n; i++) {
			v2.pb(0);
		}
		for (auto x : mp) {
			ll y = x.second;
			v2[x.first] = x.second;
			res = max(res, y);
		}
		for (int i = 0; i < n; i++) {
			ll x = (i ^ (i + 1));
			if (x <= 1) {
				fres = max(fres, v2[i + 1] + v2[i]);
			}
		}
		cout << n - max(res, fres) << endl;
	}


	return 0;
}