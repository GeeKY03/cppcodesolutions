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
		int num = v[0];
		for (int i = 1; i < n; i++) {
			num = __gcd(num, v[i]);
		}
		if (num == 1) {
			cout << 0 << endl;
		}
		else {
			set<int> sett;
			for (int i = 0; i < n; i++) {
				vi temp = v;
				temp[i] = __gcd(temp[i], i + 1);
				int ans = temp[0];
				for (int j = 1; j < n; j++) {
					ans = __gcd(ans, temp[j]);
				}
				if (ans == 1) {
					sett.insert(n - i);
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					vi temp = v;
					temp[i] = __gcd(temp[i], i + 1);
					temp[j] = __gcd(temp[j], j + 1);
					int ans = temp[0];
					for (int k = 1; k < n; k++) {
						ans = __gcd(ans, temp[k]);
					}
					if (ans == 1) {
						ll y = (n - i) + (n - j);
						sett.insert(y);
					}
				}
			}
			for (auto x : sett) {
				cout << x << endl;
				break;
			}
		}
	}


	return 0;
}