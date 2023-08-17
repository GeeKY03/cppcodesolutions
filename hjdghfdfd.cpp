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
		sort(v.begin(), v.end());
		ll ans = 0;
		ll k = n + 1;
		while (k--) {
			ll ind = 0;
			int flag = 0;
			ll num = 1;
			vi temp = v;
			ll ctr = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (temp[i] <= (k - num + 1)) {
					temp[i] = 0;
					for (int j = ind; j < n; j++) {
						if (temp[j] == 0) {
							continue;
						}
						else {
							temp[j] += (k - num + 1);
							ind = j + 1;
							break;
						}
					}
					ctr++;
					num++;
				}
				if (ctr == k) {
					ans = k;
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		cout << ans << endl;
	}


	return 0;
}