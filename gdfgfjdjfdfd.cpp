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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((b == d) && (b == 1)) {
			cout << 1 << endl;
		}
		else if ((b == 1) || (d == 1)) {
			if (b == 1) {
				cout << d << endl;
			}
			else {
				cout << b << endl;
			}
		}
		else if ((a % b == b - 1) || (c % d) == d - 1) {
			ll res = b * d * 1LL;
			res /= __gcd(b, d);
			res -= a % b;
			cout << res << endl;
		}
		else {
			for (int i = 1; i < 500000; i++) {
				if (((a + i) % b) == ((c + i) % d)) {
					cout << i << endl;
					break;
				}
			}
		}
	}


	return 0;
}