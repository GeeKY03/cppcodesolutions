#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
const int mod = 1e9 + 7;

ll fact(ll n) {
	if (n == 0)
		return 1;
	ll res = 1;
	for (ll i = 2; i <= n; i++)
		res = ((res % mod ) * i) % mod;
	return res;
}

ll nCr(ll n, ll r) {
	return fact(n) / (fact(r) * fact(n - r));
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	if (n & 1) {
		cout << 0 << endl;
	}
	else {
		ll x = n >> 1;
		ll y = nCr(n, x);
		y = (y / (x + 1));
		cout << y << endl;
	}




	return 0;
}