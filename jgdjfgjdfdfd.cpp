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
		ll ctr = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			while (x % 2 == 0) {
				x /= 2;
				ctr++;
			}
		}
		vi v2;
		for (int i = n; i > 0; i--) {
			ll temp = i;
			ll num = 0;
			while (temp % 2 == 0) {
				temp /= 2;
				num++;
			}
			v2.pb(num);
		}
		sort(v2.rbegin(), v2.rend());
		ll ctr2 = accumulate(v2.begin(), v2.end(), 0);
		if (ctr >= n) {
			cout << 0 << endl;
		}
		else if (ctr + ctr2 < n) {
			cout << -1 << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				if (ctr + v2[i] >= n) {
					cout << i + 1 << endl;
					break;
				}
				else {
					ctr += v2[i];
				}
			}
		}
	}


	return 0;
}