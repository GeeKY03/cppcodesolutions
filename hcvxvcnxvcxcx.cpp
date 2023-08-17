#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


void multiply(ll *a, ll &n, ll no) {
	ll carry = 0;
	for (ll i = 0; i < n; i++) {
		ll product = (a[i] * no) + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	while (carry) {
		a[n] = carry % 10;
		carry = carry / 10;
		n++;
	}
}

void big_factorial(ll number) {
	ll *a = new ll [1000]; // assuming not more than 1000 digits

	for (ll i = 0; i < 1000; i++) {
		a[i] = 0;
	}

	a[0] = 1;
	ll n = 1;
	for (ll i = 2; i <= number; i++) {
		multiply(a, n, i);
	}

	// print the result
	for (ll i = n - 1; i >= 0; i--) {
		cout << a[i] << "";
	}
	delete [] a;
	return ;

}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin >> n;
	big_factorial(n);



	return 0;
}