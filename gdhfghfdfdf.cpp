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
		vi v2 = {v[0]};
		for (int i = 1; i < n; i++) {
			if (v[i] == 0) {
				v2.pb(v2[i - 1]);
			}
			else {
				ll x = v2[i - 1] + v[i];
				ll y = v2[i - 1] - v[i];
				if ((x >= 0) && (y >= 0)) {
					chk = false;
				}
				else {
					v2.pb(x);
				}
			}
		}
		if (chk) {
			for (auto x : v2) {
				cout << x << " ";
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}