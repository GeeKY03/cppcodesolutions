#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
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
	ll a, b;
	cin >> a >> b;
	ll sbb = __builtin_popcountll(b);
	ll sba = __builtin_popcountll(a);
	string bita;
	vector<int> mask;
	for (int i = 0; i <= 32; i++) {
		if (a & 1) {
			bita.pb('1');
			mask.pb(1);
		}
		else {
			bita.pb('0');
			mask.pb(0);
		}
		a >>= 1;
	}
	// bits in mask= bits in a
	if (sba > sbb) {
		ll diff = sba - sbb;
		for (int i = 0; i <= 32; i++) {
			if ((mask[i] == 1) && (diff > 0)) {
				mask[i] = 0;
				diff--;
			}
		}
	}
	else {
		ll diff = sbb - sba;
		for (int i = 0; i <= 32; i++) {
			if ((mask[i] == 0) && (diff > 0)) {
				mask[i] = 1;
				diff--;
			}
		}
	}
	ll res = 0;

	for (int i = 0; i <= 32; i++) {
		if (mask[i] == 1) {
			res += binexp(2, i);
		}
	}
	cout << res << endl;


	return 0;
}