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
		int arr[n] = {0};
		vi v, v2;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			sum += x;
			v2.pb(x);
			arr[sum % n]++; // prefix sum %n frequency array
			v.pb(sum % n); // prefix sum %n array
		}
		if (n == 1) {
			cout << 1 << endl;
			cout << 1 << endl;
		}
		else if (sum % n == 0) {
			cout << n << endl;
			for (int i = 0; i < n; i++) {
				cout << i + 1 << " ";
			}
			cout << endl;
		}
		else {
			ll ind = 0;
			bool chk = false;
			for (int i = 0; i < n; i++) {
				if (arr[i] >= 2) {
					chk = true;
					ind = i;
					break;
				}
			}
			// find a zero too dummy
			bool zero = false;
			ll zind = 0;
			bool found = false;
			ll a = 0, b = 0;
			for (int i = 0; i < n; i++) {
				if ((v[i] == ind) && (found == false)) {
					a = i;
					found = true;
				}
				else if ((v[i] == ind) && (found == true)) {
					b = i;
					break;
				}
			}
			if (chk) {
				cout << b - a << endl;
				for (int i = a + 1; i <= b; i++) {
					cout << i + 1 << " ";
				}
				cout << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}


	return 0;
}