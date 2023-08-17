#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin >> t;
	ll num = t;
	while (t--) {
		if (num == 1) {
			ll n;
			cin >> n;
			vector<int> v;
			for (int i = 0; i < n; i++) {
				ll x;
				cin >> x;
				v.push_back(x);
			}
			cout << "NO" << endl;
		}
		else {
			ll n;
			cin >> n;
			vector<int> v;
			for (int i = 0; i < n; i++) {
				ll x;
				cin >> x;
				v.push_back(x);
			}
			if (v[0] == 1) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}


	return 0;
}