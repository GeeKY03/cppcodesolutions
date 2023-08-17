#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int factorial(ll n) {
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	ll k = n / 4; // possible laying config
	ll lp = n % 4; // left places
	ll ctr = 1;
	for (int i = 1; i <= k; i++) {
		ll count = (n - (4 * i)) + i;
		ll tempctr = factorial(count);
		tempctr /= factorial((n - (4 * i)));
		tempctr /= factorial(i);
		ctr += tempctr;
	}
	cout << ctr << endl;



	return 0;
}