#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vi arr;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			arr.pb(x);
		}
		int initial_term, common_difference;

		if (n == 3) {
			common_difference = arr[2] - arr[1];
			initial_term = arr[1] - common_difference;
		}

		else if ((arr[1] - arr[0]) == arr[2] - arr[1]) {
			initial_term = arr[0];
			common_difference = arr[1] - arr[0];
		}
		else if ((arr[2] - arr[1]) == (arr[3] - arr[2])) {
			common_difference = arr[2] - arr[1];
			initial_term = arr[1] - common_difference;
		}
		else {
			common_difference = (arr[3] - arr[0]) / 3;
			initial_term = arr[0];
		}
		vi v;
		for (int i = 0; i < n; i++) {
			ll num = initial_term + (i * common_difference);
			v.pb(num);
		}
		ll ctr = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] != v[i]) {
				ctr++;
			}
		}
		if ((ctr > 1) || (common_difference == 0)) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}

	return 0;
}