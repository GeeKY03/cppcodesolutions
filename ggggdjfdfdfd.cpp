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
		ll n, k;
		cin >> n >> k;
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		// for (auto x : v) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		// cout << v[k - 1] << endl;
		int flag = 0;
		ll ptr1 = 0, ptr2 = 0;
		if (k == 1) {
			ptr1 = 0;
			ptr2 = 1;
		}
		else if (v[])
			ll sum = v[ptr2];
		while (sum >= 0) {
			if (((ptr1 == 0) || (ptr2 == n)) && (sum >= 0)) {
				flag = 1;
				break;
			}
			else {
				cout << sum << endl;
				if (v[ptr1] > v[ptr2]) {
					sum += v[ptr1];
					cout << sum << " left" << endl;
					ptr1--;
				}
				else {
					sum += v[ptr2];
					ptr2++;
					cout << sum << " right" << endl;
				}
			}
		}
		if (flag == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}