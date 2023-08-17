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
		map<ll, ll> mp;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
			v.pb(x);
		}
		set<ll> sett;
		for (auto x : mp) {
			if (x.second >= 2) {
				sett.insert(x.first);
			}
		}
		bool chk = false;
		if (n <= 2) {
			cout << "YES" << endl;
		}
		else if (mp.size() <= 2) {
			cout << "YES" << endl;
		}
		// if (sett.size() == 0) {
		// 	cout << "NO" << endl;
		// }
		// else {
		// 	ll ctr = 0;
		// 	ll num = 0;
		// 	for (int i = 0; i < n; i++) {
		// 		if (sett.find(v[i]) != sett.end()) {
		// 			num = v[i];
		// 			ctr++;
		// 			break;

		// 		}
		// 		else {
		// 			ctr++;
		// 		}
		// 	}
		else if ((v[0] == v[n - 1]) || (v[0] == v[n - 2]) || (v[1] == v[n - 1])) {
			cout << "YES" << endl;
		}
		// 	for (int i = n - 1; i >= 0; i--) {
		// 		if (sett.find(v[i]) != sett.end()) {
		// 			if (v[i] != num) {
		// 				ctr++;
		// 				break;
		// 			}
		// 			else if (v[i] == num) {
		// 				break;
		// 			}
		// 			else {
		// 				ctr++;
		// 			}
		// 		}
		// 	}
		else {
			bool chk2 = true;
			for (int i = 0; i < n - 2; i++) {
				if (v[i] == v[0]) {
					if (v[i + 1] == v[n - 1]) {
						cout << "YES" << endl;
						chk2 = false;
						break;
					}
				}
			}
			if (chk2 == true) {
				cout << "NO" << endl;
			}
		}
		// 	if (ctr <= 2) {
		// 		chk = true;
		// 	}
		// }

		// ll count = 0;
		// for (int i = 0; i < n ; i++) {
		// 	if (mp[v[i]] > 1) {
		// 		count++;
		// 		for (int j = i + 1; j < n; j++) {
		// 			if (v[j] == v[i]) {
		// 				i = j;
		// 				break;
		// 			}
		// 		}
		// 	}
		// 	else {
		// 		count++;
		// 	}
		// }

	}


	return 0;
}