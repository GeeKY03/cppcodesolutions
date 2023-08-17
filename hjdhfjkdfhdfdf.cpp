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

void subset(ll n , vector<ll> &v2) {
	ll num = (1 << n) - 1;
	for (int i = 0; i <= num; i++) {
		string bin;
		ll x = i;
		for (int j = 0; j < n; j++) {
			if (x & 1) {
				bin.pb('1');
			}
			else {
				bin.pb('0');
			}
			x >>= 1;
		}
		ll res = 0;
		for (int k = 0; k < bin.size(); k++) {
			if (bin[k] == '0') {
				res += (binexp(10, k)) * 4;
			}
			else {
				res += (binexp(10, k)) * 7;
			}
		}
		v2.pb(res);
	}
}

void gen_sub( vector<ll> &v2) {
	for (int i = 1; i <= 9; i++) {
		subset(i, v2);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vi v = {4, 7};
	// now let us generate subsets of size 9
	ll num = 9;
	vector<ll> v2;
	gen_sub( v2);
	sort(v2.begin(), v2.end());
	ll ctr = 1;
	for (auto x : v2) {
		if (x == n) {
			cout << ctr << endl;
		}
		ctr++;
	}



	return 0;
}