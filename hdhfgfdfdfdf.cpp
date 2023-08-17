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
		string s;
		cin >> s;
		ll n = s.size();
		vi v;
		for (int i = 0; i < n; i++) {
			ll x = s[i] - 48;
			v.pb(x);
		}
		if (n == 1) {
			cout << s << endl;
		}
		else {
			vi freq(10, 0);
			while (v.size() > 0) {
				int mn = 9;
				ll sz = v.size();
				for (int i = sz - 1; i >= 0; i--) {
					mn = min(mn, v[i]);
				}
				ll ind = 0;
				for (int i = sz - 1; i >= 0; i--) {
					if (v[i] == mn) {
						ind = i;
						break;
					}
				}
				for (int i = ind; i >= 0; i--) {
					if (v[i] == mn) {
						freq[v[i]]++;
					}
					else if (v[i] == 9) {
						freq[9]++;
					}
					else {
						freq[v[i] + 1]++;
					}
				}
				// cout << "Min: " << mn << endl;
				// cout << "Before: ";
				// for (auto x : v) {
				// 	cout << x << " ";
				// }
				// cout << endl;
				v.erase(v.begin(), v.begin() + (ind + 1));
				// cout << "After: ";
				// for (auto x : v) {
				// 	cout << x << " ";
				// }
				// cout << endl;
				// for (int i = 0; i < 10; i++) {
				// 	cout << i << " : " << freq[i] << endl;
				// }
			}
			// for (int i = 0; i < 10; i++) {
			// 	cout << i << " : " << freq[i] << endl;
			// }
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < freq[i]; j++) {
					cout << i;
				}
			}
			cout << endl;
		}

		// for (int i = 1; i <= 10; i++) {
		// 	cout << i << " : " << freq[i - 1] << endl;
		// }

	}


	return 0;
}