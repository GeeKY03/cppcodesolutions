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
		ll a, b, p, q;
		cin >> a >> b >> p >> q;
		int chk = 1;
		if ((p % a != 0) || (q % b != 0)) {
			chk = 0;
		}
		// cout << a << " " << b << " " << p << " " << q << endl;
		ll x = p / a;
		// cout << x << endl;
		ll arr[3] = {b * x, b*(x + 1), b*(x - 1)};
		if ((q != arr[0]) && (q != arr[1]) && (q != arr[2])) {
			chk = 0;
		}
		if (chk) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		// cout << x << endl;
		// if ((q == b * x) || (q == b * (x - 1)) || (q == b * (x + 1))) {
		// 	continue;
		// }
		// else {
		// 	chk = false;
		// }
		// cout << chk << endl;
	}


	return 0;
}