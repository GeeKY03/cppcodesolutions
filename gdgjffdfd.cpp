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
		ll mx = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		for (int i = 0; i < n - 1; i++) {
			if (v[i] > v[i + 1]) {
				ll z = v[i + 1] + ((v[i] - v[i + 1] + 1) / 2);
				mx = max(mx, z);
			}
		}
		vlli v2, v3;
		for (int i = 0; i < n; i++) {
			ll num = abs(mx - v[i]);
			v2.pb(num);
			v3.pb(num);
		}
		sort(v2.begin(), v2.end());
		bool chk = true;
		for (int i = 0; i < n; i++) {
			if (v2[i] != v3[i]) {
				chk = false;
			}
		}
		if (chk == true) {
			cout << mx << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}