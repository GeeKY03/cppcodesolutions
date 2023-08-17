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
		//your code goes here
		int n, m, sx, sy, d;
		cin >> n >> m >> sx >> sy >> d;
		ll ans = 0;

		if (sx + d >= n && sy + d >= m) {
			ans = -1;
		}
		else if (sx - d <= 1 && sy - d <= 1) {
			ans = -1;
		}
		else if (sx + d >= n && sx - d <= 1) {
			ans = -1;
		}
		else if (sy + d >= m && sy - d <= 1) {
			ans = -1;
		}
		else {
			ans = n + m - 2;
		}
		cout << ans << endl;
	}


	return 0;
}