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
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		ll ans = 0;
		ll k = n + 1;
		while (k--) {
			if (k == 0) {
				ans = 0;
				break;
			}
			set<int> sett;
			int flag = 0;
			ll num = 1;
			vi temp = v;
			ll ctr = 0;
			if (temp[0] > k) {
				break;
			}
			for (int i = n - 1; i >= 0; i--) {
				if (temp[i] <= (k - num + 1)) {
					temp[i] = 0;
					if (i > 0) {
						for (int j = i - 1; j >= 0; j--) {
							if (temp[j] <= (k - num)) {
								temp[j] += k - num + 1;
								i = j - 1;
								break;
							}
							else if (j == 0) {
								temp[j] += (k - num + 1);
							}
							else {
								sett.insert(temp[j]);
							}
						}
					}
					else {
						if (sett.size() > 0) {
							continue;
						}
						else {
							break;
						}
					}
					num++;
					ctr++;
				}
				else {
					sett.insert(temp[i]);
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