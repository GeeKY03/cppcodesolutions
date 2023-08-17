#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
const int m = 1e9 + 7;

ll binexp(ll a, ll b , ll m ) {

	ll res = 1;
	a %= m;
	while (b > 0) {
		if (b & 1) {
			res = res * a  % m ;
		}
		a = a * a  % m  ;
		b >>= 1;
	}
	return res;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll res = binexp(n, k, m) % m;
		cout << res << endl;
	}



	return 0;
}