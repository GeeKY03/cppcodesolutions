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
		ll n;
		cin >> n;
		vi a;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		vi b;
		b.pb(a[0]);
		for (int i = 0; i < n - 1; i++) {
			ll lcm = (a[i] * a[i + 1]) / __gcd(a[i], a[i + 1]);
			b.pb(lcm);
		}
		bool chk = true;
		b.pb(a[n - 1]);
		for (int i = 0; i < n; i++) {
			if (__gcd(b[i], b[i + 1]) == a[i]) {
				continue;
			}
			else {
				chk = false;
			}
		}
		if (chk) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}