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
		ll n, x, y;
		cin >> n >> x >> y;
		string s1, s2;
		cin >> s1 >> s2;
		ll orz = 0;
		for (int i = 0; i < n; i++) {
			s1[i] ^= s2[i];
			orz += s1[i];
		}
		ll ans = 0;
		if (orz & 1) {
			ans = -1;
		}
		else {
			if (orz == 2) {
				int l = 0, r = n - 1;
				while (!s1[l]) {
					l++;
				}
				while (!s1[r]) {
					r--;
				}
				if (l + 1 == r) {
					ans = min(x, 2 * y), min(2 * x, y);
				}
				else {
					ans = y;
				}
			}
			else {
				ans = (orz / 2) * y ;
			}
		}
		cout << ans << endl;
	}


	return 0;
}