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
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		vi freq(100001, 0);
		ll num = 0;
		for (int i = n - 1; i > 0; i--) {
			if (v[i] < v[i - 1]) {
				ll x = v[i - 1] - v[i];
				freq[x]++;
			}
		}
		vi ans(100001, 0);
		for (int i = n - 1; i > 0; i--) {
			if (v[i] < v[i - 1]) {
				ll x = v[i - 1] - v[i];
				if (freq[x] != -1) {
					ans[x] = i;
					freq[x] = -1;
				}
				else {
					ll sum = 0;
					for (int i = 1; i <= n; i++) {
						if (freq[i] != -1) {
							sum += i;
							freq[i] = -1;
						}
						if (sum > x) {
							break;
						}
					}
				}
			}
		}
	}


	return 0;
}