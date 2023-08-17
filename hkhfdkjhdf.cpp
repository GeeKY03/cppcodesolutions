#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

//Sieve Approach
void prime_sieve(vector<long long> &p) {

	//Special case
	p[2] = 1;
	p[0] = p[1] = 0;

	// first we mark all odd numbers as prime
	// because even numbers cannot be prime (except: 2)
	for (ll i = 3; i <= 1000000; i += 2) {
		p[i] = 1;
	}

	// Sieve
	for (ll i = 3; i <= 1000000; i += 2) {
		// if the current number is not marked (it is prime)
		if (p[i] == 1) {
			// Mark all the multiples of i as not prime
			for (ll j = i * i; j <= 1000000; j = j + i) {
				p[j] = 0;
			}
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	// array to store if a number is prime or not



	// printing all prime numbers


	return 0;
}