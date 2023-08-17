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
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		bool chk = true;
		ll res = v[0];
		for (int i = 1; i < n; i++) {
			if (v[i] == 0) {
				continue;
			}
			else if (v[i] <= res) {
				chk = false;
			}
			else {
				res += v[i];
			}
		}
		if (chk) {
			ll ans = 0;
			for (int i = 0; i < n; i++) {
				ans += v[i];
				cout << ans << " ";
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}