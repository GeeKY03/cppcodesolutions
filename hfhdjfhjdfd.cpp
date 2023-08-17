#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

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
		ll f1 = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				f1 = i;
				break;
			}
		}
		ll f0fr = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '0') {
				f0fr = i;
				break;
			}
		}
		if (f0fr < f1) {
			cout << s << endl;
		}
		else if (f1 == n - 1) {
			cout << s << endl;
		}
		else {
			for (int i = f0fr; i > f1; i--) {
				if (s[i] == '1') {
					s[i] = '0';
				}
			}
			// cout << s << endl;
			string res;
			for (int i = 0; i < f1; i++) {
				res.pb(s[i]);
			}
			ll f1l = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (s[i] == '1') {
					f1l = i;
					break;
				}
			}
			bool once = false;
			res.pb('0');
			for (int i = f1l; i < n; i++) {
				res.pb(s[i]);
			}
			cout << res << endl;
		}
	}


	return 0;
}