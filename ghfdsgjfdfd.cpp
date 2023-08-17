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
	ll n, m, k;
	cin >> n >> m >> k;

	ll ctr = 0;
	vi v;
	ll fed = 0;
	for (int i = 0; i <= m; i++) {
		ll x;
		cin >> x;
		if (i == m) {
			fed = x;
		}
		else {
			v.pb(x);
		}
	}
	string s;
	for (int i = 0; i < 21; i++) {
		if (fed & 1) {
			s.pb('1');
		}
		else {
			s.pb('0');
		}
		fed >>= 1;
	}
	reverse(s.begin(), s.end());
	for (auto x : v) {
		ll num = x;
		string temp;
		for (int i = 0; i < 21; i++) {
			if (num & 1) {
				temp.pb('1');
			}
			else {
				temp.pb('0');
			}
			num >>= 1;
		}
		reverse(temp.begin(), temp.end());
		ll count = 0;
		for (int i = 0; i < 21; i++) {
			if (s[i] != temp[i]) {
				count++;
			}
		}
		// cout << s << " " << temp << endl;
		// cout << count << endl;
		if (count <= k) {
			ctr++;
		}
	}
	cout << ctr << endl;


	return 0;
}