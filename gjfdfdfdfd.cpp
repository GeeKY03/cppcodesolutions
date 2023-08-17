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
		ll l, r;
		cin >> l >> r;
		ll ctr = 0;
		ll a = sqrt(l), b = sqrt(r);
		ll num = (a + 1) * (a + 1) * 1LL;


		for (int i = a; i <= a + 1 ; i++) {
			ll x = i * i * 1LL;
			ll y = x + i;
			ll z = y + i;
			if (x >= l) {
				if (x <= num) {
					ctr++;
				}
			}
			if (y >= l) {
				if (y <= num) {
					ctr++;
				}
			}
			if (z >= l) {
				if (z <= num) {
					ctr++;
				}
			}
		}
		a++;
		while (true) {
			ll sq1 = a * a * 1LL;
			ll sq2 = (a + 1) * (a + 1) * 1LL;
			if (sq2 > r) {
				sq2 = r;
				ctr += (sq2 - sq1) / a;
				break;
			}
			else {
				ctr++;
				ctr += (sq2 - sq1) / a;
			}
			a++;
		}
		cout << ctr << endl;
	}


	return 0;
}