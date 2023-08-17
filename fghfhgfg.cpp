#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vector<vector<int>> itv(n, vector<int> (2, 0));
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		itv[i][0] = x;
		itv[i][1] = y;
	}
	for (auto x : itv) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << endl;
	}
	vector<int> vis(n + 5, 0);
	for (int i = 0; i < n - 1; i++) {
		if (vis[i] == 0) {
			for (int j = 0; j < n; j++) {
				if (vis[j] == 0) {
					ll x = itv[i][0], y = itv[i][1];
					if ((x < itv[j][0]) && (y > itv[j][0])) {
						y = itv[j][1];
					}
					else if ((x > itv[j][0]))
					}
			}
		}
	}



	return 0;
}