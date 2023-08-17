//To check if a large number is prime or not
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

bitset<10000005> b; // 10^7+5
vector<ll> primes;

void sieve() {
	b.set();

	b[0] = b[1] = 0;

	for (ll i = 2; i <= 10000000; i++) {
		if (b[i]) {
			primes.pb(i);
			for (ll j = i * i * 1LL; j <= 10000000; j = j + i) {
				b[j] = 0;
			}
		}
	}
}

bool check(ll n) {
	if (n <= 10000000) {
		if (b[n] == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	for (ll i = 0; primes[i]*primes[i] * 1LL <= n; i++) {
		if (n % primes[i] == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	sieve();
	ll n;
	cin >> n;
	if (check(n) == true) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}




	return 0;
}