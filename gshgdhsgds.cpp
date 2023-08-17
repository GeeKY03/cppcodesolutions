// Prints all prime numbers in the range [m,n]

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


const int N = 1000; // 10^5 (because sqrt(10^9) ~= 10^5)
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
		int l, r;
		cin >> l >> r;
		auto it1 = lower_bound(primes.begin(), primes.end(), l + 1);
		auto it2 = lower_bound(primes.begin(), primes.end(), r);
		ll st = distance(primes.begin(), it1);
		ll end = distance(primes.begin(), it2);
		int mx = 0;
		for (int i = st + 1; i < end; i++) {
			// cout << primes[i] << " ";
			mx = max(mx, primes[i] - primes[i - 1] - 1);
		}
		mx = max(mx, primes[st] - l - 1);
		mx = max(mx, r - primes[end - 1] - 1);
		cout << mx << endl;

	}



	return 0;
}