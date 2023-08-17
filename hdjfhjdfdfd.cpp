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
		n *= 2;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		vi v2;
		ll ctr = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] != v[i - 1]) {
				v2.pb(ctr);
				ctr = 1;
			}
			else {
				ctr++;
			}
			if (i == n - 1) {
				v2.pb(ctr);
			}
		}
		ll sum = 0;
		// for (auto x : v2) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		for (int i = 0; i < v2.size(); i++) {
			if (abs(sum + v2[i]) > abs(sum - v2[i])) {
				sum -= v2[i];
			}
			else {
				sum += v2[i];
			}
		}
		// cout << sum << endl;
		if (sum == 0) {
			cout << "YES" << endl;
		}
		else if (abs(sum) == 2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}