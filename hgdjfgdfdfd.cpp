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
		ll mo = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			if (x == -1) {
				mo++;
			}
		}
		bool chk = true;
		ll sum = 0;
		ll ind = 0;
		vector<pair<int, int> > vp;
		for (int i = 0; i < n; i++) {
			if (v[i] == -1) {
				pair<int, int> p = {i, i};
				vp.pb(p);
			}

			else {
				ind = i;
				sum += v[i];
				if (sum == 0) {
					pair<int, int> p = {ind, i};
					vp.pb(p);
					ind = i + 1;
				}
			}
		}
	}
	if (sum != 0) {
		chk = false;
	}
	if (chk) {
		cout << vp.size() << endl;
		for (auto x : vp) {
			cout << x.first + 1 << " " << x.second + 1 << endl;
		}
	}
	else {
		cout << -1 << endl;
	}
}


return 0;
}