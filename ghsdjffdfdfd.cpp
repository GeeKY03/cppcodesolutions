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
		set<ll> sett;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			sett.insert(x);
		}
		bool chk = false;
		if (sett.size() <= 2) {
			cout << "YES" << endl;
		}
		else if ((v[0] == v[n - 1]) || (v[0] == v[n - 2]) || (v[1] == v[n - 1])) {
			cout << "YES" << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				ll y = 0, z = 0;
				z = lower_bound(v.begin() + i + 1, v.end(), v[i]) - v.begin();
				if ((v[z] == v[i]) && (z < n - 1)) {
					y = lower_bound(v.begin() + z + 1, v.end(), v[z + 1]) - v.begin();
				}
				if (y >= n - 1) {
					cout << "YES" << endl;
					chk = true;
					break;
				}
			}
			if (chk == false) {
				cout << "NO" << endl;
			}
		}
	}


	return 0;
}