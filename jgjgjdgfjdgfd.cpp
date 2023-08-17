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
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> v(n, vector<ll> (m, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ll x;
				cin >> x;
				v[i][j] = x;
			}
		}
		ll num = 0;
		ll i = 0, j = 0;
		while ((i != n - 1) && (j != n - 1)) {
			num = max(num, v[i][j]);
			ll a1 = 1000000, a2 = 1000000;
			if (j + 2 <= m - 1) {
				a1 = v[i][j + 2];
			}
			if (i + 2 <= n - 1) {
				a2 = v[i + 2][j];
			}
			if (a1 > a2) {
				i += 1;
			}
			else if (a1 < a2) {
				j += 1;
			}
			else {
				if (v[i + 1][j] > v[i][j + 1]) {
					j++;
				}
				else {
					i++;
				}
			}
			num = max(num, v[i][j]);
			// anya's turn
			ll b1 = 0, b2 = 0;
			if (i + 1 <= n - 1) {
				b1 = v[i + 1][j];
			}
			if (j + 1 <= m - 1) {
				b2 = v[i][j + 1];
			}
			if (b1 > b2) {
				i++;
			}
			else {
				j++;
			}
			num = max(num, v[i][j]);
		}
		cout << num << endl;
	}


	return 0;
}