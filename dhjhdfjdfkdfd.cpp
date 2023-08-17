#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

string alpha = "abcdefghijklmnopqrstuvwxyz";

ll count(ll l, ll r, ll ind, string s) {
	ll ctr = 0;
	for (int i = 1; i <= r; i++) {
		if (s[i] != alpha[ind]) {
			ctr++;
		}
	}
	return ctr;
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
		if (n == 1) {
			if (s != "a") {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else {
			ll num = (1 << ((n / 2) + 1)) - 1;
			// cout << num << endl;
			vector<string> v;
			for (int i = 1; i <= num; i++) {
				ll temp = i;
				string str;
				if (temp & 1) {
					str.pb('1');
				}
				else {
					str.pb('0');
				}
				temp >>= 1;
				v.pb(str);
			}
			set<ll> sett;
			ll x = n / 2;
			for (int i = 0; i < num; i++) {
				ll ind = 0;
				ll ctr = 0;
				ll l = 0, r = n - 1;
				while (ind < (n / 2)) {
					if (s[ind] == '0') {
						r = (l + r) / 2;
						ctr += count(l, r, ind, s);
					}
					else {
						l = (l + r) / 2;
						ctr += count(l, r, ind, s);
					}
					ind++;
				}
				sett.insert(ctr);
			}
			for (auto x : sett) {
				cout << x << endl;
				break;
			}
		}
	}


	return 0;
}