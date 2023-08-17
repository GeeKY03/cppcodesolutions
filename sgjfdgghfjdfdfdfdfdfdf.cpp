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
		vector<char> v1;
		for (int i = 0; i < n; i++) {
			v1.pb(s[i]);
		}

		// cout << ind << endl;
		ll num = (1 << ind) - 1;
		// cout << num << endl;
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
			cout << s1 << endl;
			ll res = 0;
			ll tempind = 0;
			vector<char> v = v1;
			for (int i = 0; i < ind; i++) {
				if (s1[i] = '1') {
					for (int j = v.size() / 2; j < v.size(); j++) {
						if (v[j] != ref[tempind]) {
							res++;
						}
					}
					int sz = v.size();
					for (int j = sz / 2 ; j < sz; j++) {
						v.erase(v.begin() + (sz / 2));
					}
					tempind++;
					for (auto x : v) {
						cout << x << " ";
					}
					cout << endl;
				}
				else {
					for (int j = 0; j < v.size() / 2; j++) {
						if (v[j] != ref[tempind]) {
							res++;
						}
					}
					int sz = v.size();
					for (int j = 0; j < sz / 2; j++) {
						v.erase(v.begin());
					}
					for (auto x : v) {
						cout << x << " ";
					}
					cout << endl;
				}
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