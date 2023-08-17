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
		ll n, k;
		cin >> n >> k;
		ll num = 3;
		ll ans = -1;
		for (int i = 1; i < k; i++) {
			if (num + (k - i) & 1) {
				num += 3;
			}
			else {
				if (num + (k - i) == n) {
					ans = k - i;
					break;
				}
				else {
					num += 3;
				}
			}
		}
		cout << ans << endl;
	}


	return 0;
}