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
		if ((v[0] + v[n - 1]) & 1) {

		}

		int ind = 0;
		int flag = 0;

		// cout << ind << endl;
		vector<pair<int, int>> vp;
		for (int i = 1; i < n - 1; i++) {
			if ((v[0] + v[i]) & 1) {
				v[i] = v[ind];
				pair<int, int> p = {ind, i};
				vp.pb(p);
			}
		}

		if (flag == 1) {
			cout << 0 << endl;
		}
		else {
			cout << vp.size() << endl;
			for (auto x : vp) {
				cout << x.first + 1 << " " << x.second + 1 << endl;
			}
		}
	}


	return 0;
}