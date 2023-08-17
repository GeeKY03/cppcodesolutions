#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
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
		ll k;
		cin >> s >> k;
		ll n = s.size();
		ll temp = k;
		string res;
		vlli v;
		for (int i = 0; i < n; i++) {
			v.pb(s[i] - 48);
		}
		// print v
		// for (auto x : v) {
		// 	cout << x << " ";
		// }
		ll zc = 0;
		while (temp > 0) {
			ll ind = -1;
			bool brk = false;
			ll zind = -1;
			for (int i = 0; i <= temp; i++) {
				if (v[i] == 0) {
					zind = i;
					break;
				}
			}
			zind--;
			if (zind == -1) {
				for (int i = 1; i <= 9; i++) {
					for (int j = 0; j <= temp; j++) {
						if (v[j] == i) {
							ind = j;
							brk = true;
							break;
						}
					}
					if (brk == true) {
						break;
					}
				}
				v.erase(v.begin(), v.begin() + ind);
				res += to_string(v[0]);
				v.erase(v.begin());
				temp -= ind;
			}
			else {
				ll deli = zind;
				for (int i = 1; i <= 9; i++) {
					for (int j = 0; j < zind; j++) {
						if (v[j] == i) {
							zind = j;
							brk = true;
							break;
						}
					}
					if (brk == true) {
						break;
					}
				}
				res += to_string(v[zind]);
				v.erase(v.begin(), v.begin() + deli);
				res += to_string(v[0]);
				v.erase(v.begin());
				temp -= zind + 1;
			}
			// for (auto x : v) {
			// 	cout << x << " ";
			// }
			// break;
		}
		cout << res;
		for (auto x : v) {
			cout << x;
		}
		cout << endl;
	}


	return 0;
}