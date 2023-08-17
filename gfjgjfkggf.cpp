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
		vi prime = {2, 3, 5, 7, 11, 13, 17, 19};
		ll ans = 0;
		ll num = (1 << 8) - 1;
		for (int i = 1; i <= num; i++) {
			ll temp = i;
			ll div = 1ll;
			ll ind = 0;
			ll ctr = 0;
			while (temp > 0) {
				if (temp & 1) {
					ctr++;
					div *= prime[ind];
				}
				ind++;
				temp >>= 1;
			}
			if (ctr & 1) {
				ans += n / div;
			}
			else {
				ans -= n / div;
			}
		}
		cout << ans << endl;
	}


	return 0;
}