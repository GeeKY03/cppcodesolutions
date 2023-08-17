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

void process() {
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

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	process();
	ll n;
	cin >> n;
	// To print first n primes
	vi v(4000, 0);
	for (int i = 0; i < primes.size(); i++) {
		if (primes[i] > 3000) {
			break;
		}
		ll num = 1;
		while ((num * primes[i]) < 3000) {
			v[num * primes[i]]++;
			num++;
		}
	}
	ll ctr = 0;
	for (int i = 0; i <= n; i++) {
		if (v[i] == 2) {
			ctr++;
		}
	}
	cout << ctr << endl;



	return 0;
}