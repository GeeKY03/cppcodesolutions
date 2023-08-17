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

vector<string> arr;

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		set<ll> sett;
		ll n, k;
		cin >> n >> k;
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll num = (1 << 17) - 1;
		for (int i = 0; i <= num; i++) {
			ll temp = i;
			string s;
			for (int i = 0; i < 16; i++) {
				if (temp & 1) {
					s.pb('1');
				}
				else {
					s.pb('0');
				}
				temp >>= 1;
			}
			arr.pb(s);
			ll num = 0;
			for (int i = 0; i < 16; i++) {
				if (s[i] == '1') {
					num += binexp(k, i);
				}

			}
			sett.insert(num);
		}
		// set<int> sett;
		// ll ctr = 0;
		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < 131072; j++) {
		// 		string s = arr[j];
		// 		ll num = 0;
		// 		set<int> temp;
		// 		for (int l = 0; l < 16; l++) {
		// 			if (s[l] == '1') {
		// 				if (sett.find(l) == sett.end()) {
		// 					num += binexp(k, l);
		// 					temp.insert(l);
		// 				}
		// 				else {
		// 					break;
		// 				}
		// 			}
		// 		}
		// 		// cout << num << " " << v[i] << endl;
		// 		if (num == v[i]) {
		// 			ctr++;
		// 			for (auto x : temp) {
		// 				sett.insert(x);
		// 			}
		// 			break;
		// 		}
		// 	}
		// }
		// if (ctr == n) {
		// 	cout << "YES" << endl;
		// }
		// else {
		// 	cout << "NO" << endl;
		// }
	}


	return 0;
}