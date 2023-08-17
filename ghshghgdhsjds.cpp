#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


const int N = 100000; // 10^5 (because sqrt(10^9) ~= 10^5)
vector<int> primes;
int p[N] = {0};
void sieve() {
	for (int i = 2; i <= N; i++) {
		if (p[i] == 0) {
			primes.pb(i);
			// Mark all multiples of i as not prime
			for (int j = i; j <= N; j += i) {
				p[j] = 1; // Marked as not prime
			}
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	sieve();// Building this sieve only once

	ll t;
	cin >> t;
	while (t--) {
		ll m, n;
		cin >> m >> n;
		bool segment[n - m + 1]; // Marking all as prime
		for (int i = 0; i < (n - m + 1); i++) {
			segment[i] = 0;
		}
		// here segmented sieve logic
		for (auto x : primes) {
			if (x * x > n) {
				break;
			}
			ll start = (m / x) * x ;
			if ((x >= m) and (x <= n)) {
				start = x * 2;
			}
			for (int i = start; i <= n; i += x) {

				segment[i - m] = 1;
			}
		}
		for (int i = m; i <= n; i++) {
			if ((segment[i - m] == 0) and (i != 1)) {
				cout << i << endl;
			}
		}
		cout << endl;
	}



	return 0;
}