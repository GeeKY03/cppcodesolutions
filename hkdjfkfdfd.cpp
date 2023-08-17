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
		int flag = 0;
		ll check = abs(n - sx) + abs(m - sy);
		if (check <= d) {
			flag = 1;
		}
		ll check2 = abs(1 - sx) + abs(1 - sy);
		if ()



			ll ctr1 = 0;
		// horzontally then vertically
		ll x1 = 1, y1 = 1;
		for (int i = 1; i < m; i++) {
			ll c1 = abs(y1 + 1 - sy) + abs(x1 - sx);
			if (c1 > d) {
				y1++;
				ctr1++;
			}
			else {
				flag = 1;
				ctr1 = -1;
				break;
			}
		}
		if (y1 == m) {
			for (int j = 1; j < n; j++) {
				ll c2 = abs(x1 + 1 - sx) + abs(y1 - sy);
				if (c2 > d) {
					x1++;
					ctr1++;
				}
				else {
					flag = 1;
					ctr1 = -1;
					break;
				}
			}
		}
		if ((x1 == n) && (y1 == m)) {
			flag = 0;
		}

		//vertically then horizontally
		ll ctr2 = 0;
		ll x2 = 1, y2 = 1;
		for (int j = 1; j < n; j++) {
			ll c2 = abs(x2 + 1 - sx) + abs(y2 - sy);
			if (c2 > d) {
				x2++;
				ctr2++;
			}
			else {
				flag = 1;
				ctr2 = -1;
				break;
			}
		}
		if (x2 == n) {
			for (int i = 1; i < m; i++) {
				ll c1 = abs(y2 + 1 - sy) + abs(x2 - sx);
				if (c1 > d) {
					y2++;
					ctr2++;
				}
				else {
					flag = 1;
					ctr2 = -1;
					break;
				}
			}
		}
		if ((x2 == n) && (y2 == m)) {
			flag = 0;
		}
		if (flag == 1) {
			cout << -1 << endl;
		}
		else {
			ll res = min(ctr1, ctr2);
			if (res < 0) {
				cout << max(ctr1, ctr2) << endl;
			}
			else {
				cout << res << endl;
			}
		}

	}


	return 0;
}