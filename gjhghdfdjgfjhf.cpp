#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a /* %m*/ ;
		}
		a = a * a /* %m */ ;
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
		ll n;
		cin >> n;
		ll x = n;
		ll res = 0;
		while (x > 0) {
			ll num = 0;
			ll ind = 0;
			for (int i = 0; i > -1; i++) {
				if ((binexp(2, i)) > x) {
					break;
				}
				num = binexp(2, i);
				ind = i;
			}
			ll plus = binexp(2, ind + 1) - 1;
			res += plus;
			x -= num;
		}
		cout << res + x << endl;
	}


	return 0;
}