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
		string s;
		cin >> s;
		string ref = "abcdefghijklmnopqrstuvwxyz";
		ll ind = 0;
		for (int i = 0; i > -1; i++) {
			if (n == (binexp(2, i))) {
				ind = i;
				break;
			}
		}

		ll num = (1 << ind) - 1;
		set<int> sett;
		for (int i = 0; i <= num; i++) {
			string s1;
			ll temp = i;
			for (int j = 0; j < ind; j++) {
				if (temp & 1) {
					s1.pb('1');
				}
				else {
					s1.pb('0');
				}
				temp >>= 1;
			}
			ll res = 0;
			ll tempind = 0;
			string sv = s;
			for (int i = 0; i < ind; i++) {
				if (s1[i] == '1') {
					int sz = sv.size();
					for (int j = sz / 2; j < sz; j++) {
						if (sv[j] != ref[tempind]) {
							res++;
						}
					}

					for (int j = sz / 2 ; j < sz; j++) {
						sv.erase(sv.begin() + (sz / 2));
					}
					tempind++;
				}
				else {
					int sz = sv.size();
					for (int j = 0; j < sz / 2; j++) {
						if (sv[j] != ref[tempind]) {
							res++;
						}
					}
					for (int j = 0; j < sz / 2; j++) {
						sv.erase(sv.begin());
					}
					tempind++;
				}

			}
			if (sv[0] != ref[tempind]) {
				res++;
			}
			sett.insert(res);
		}
		for (auto x : sett) {
			cout << x << endl;
			break;
		}
	}


	return 0;
}