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
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		ll l = 0, r = (1 << 30) - 1;
		bool chk = true;
		while (l <= r) {
			ll mid = (l + r) / 2;
			if ((a ^ mid) < (b ^ mid) and (b ^ mid) < (c ^ mid)) {
				cout << mid << endl;
				chk = false;
				break;
			}
			else if ((a ^ mid) < (b ^ mid)) {
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
		if (chk) {
			cout << -1 << endl;
		}
	}


	return 0;
}