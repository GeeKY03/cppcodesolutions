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
		ll n, m, sx, sy, d;
		cin >> n >> m >> sx >> sy >> d;
		ll check = abs(n - sx) + abs(m - sy);
		if (check <= d) {
			cout << -1 << endl;
		}
		else {
			ll ctr = 0;
			ll x = 1, y = 1;

			for (int i = 1; i >= 0; i++) {
				if (i == 10) {
					break;
				}
				if ((x == n) && (y == m)) {
					break;
				}
				if (i & 1) {
					ll c1 = abs(y + 1 - sy) + abs(x - sx);
					if (c1 > d) {
						y++;
						ctr++;
					}
				}
				else {
					ll c2 = abs(x + 1 - sx) + abs(y - sy);
					if (c2 > d ) {
						x++;
						ctr++;
					}
				}
				cout << x << " " << y << endl;
			}
			cout << ctr << endl;
		}
	}


	return 0;
}