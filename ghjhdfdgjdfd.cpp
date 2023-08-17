#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


vector<ll> primes;
void sieve() {
	bitset<10005> b;
	b.set();
	b[0] = b[1] = 0;

	for (int i = 2; i <= 10000; i++) {
		if (b[i]) {
			primes.pb(i);
			for (ll j = i * i * 1LL; j <= 10000; j = j + i) {
				b[j] = 0;
			}
		}
	}

}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	sieve();
	ll t;
	cin >> t;
	while (t--) {
		ll m, n;
		cin >> m >> n;
		vector<ll> v(n - m + 1, 1);
		for (ll i = 0; i < primes.size(); i++) {
			ll x = m / primes[i];
			x *= primes[i];
			for (int j = 0; j < (n - m + 1); j += primes[i]) {
				if (x < m) {
					continue;
				}
				else {
					v[x - m] = 0; // Marking all non primes
				}
			}
		}
		for (int i = 0; i < (n - m + 1); i++) {
			if (v[i] == 1) {
				cout << i + m << endl;
			}
		}

	}


	return 0;
}