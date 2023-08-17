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
		int one = 0, zero = 0;
		for (auto x : bin) {
			if (x == '1') {
				one++;
			}
			else {
				zero++;
			}
		}
		if (one == zero) {
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
}

void gen_sub( vector<ll> &v2) {
	for (int i = 2; i <= 10; i += 2) {
		subset(i, v2);
	}
}

ll bs(ll n, vector<ll> v2) {
	int l = 0, r = v2.size();
	while (l < r) {
		ll mid = (l + r) / 2;
		if (v2[mid] == n) {
			return v2[mid];
		}
		else if (v2[mid] > n) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	ll ans = v2[r];
	return ans;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	ll o = 0, z = 0;
	string check = to_string(n);
	for (auto x : check) {
		if (x == '4') {
			o++;
		}
		else if (x == '7') {
			z++;
		}
	}
	if ((z == o) && (z + o == n)) {
		cout << n << endl;
	}
	else {
		vi v = {4, 7};
		// now let us generate subsets of size 9
		ll num = 9;
		vector<ll> v2;
		gen_sub( v2);
		sort(v2.begin(), v2.end());
		ll ctr = 1;
		// for (auto x : v2) {
		// 	cout << x << endl;
		// }
		cout << bs(n, v2) << endl;
	}




	return 0;
}