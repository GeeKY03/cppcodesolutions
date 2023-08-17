#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void gen_sub(ll n, vector<string> &v2) {
	ll num = (1 << n);
	for (int i = 0; i < num; i++) {
		ll x = i;
		string s;
		for (int i = 0; i < n; i++) {
			if (x & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			x >>= 1;
		}
		v2.pb(s);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vi v;
	vector<string> v2;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	int flag = 0;
	gen_sub(n, v2);
	for (auto x : v2) {
		ll deg = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] == '1') {
				deg += v[i];
			}
			else {
				deg -= v[i];
			}
		}
		if (deg > 0) {
			if (deg % 360 == 0) {
				flag = 1;
			}
		}
		else {
			if (((deg % 360) + 360) % 360 == 0) {
				flag = 1;
			}

		}
	}
	if (flag == 1) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}



	return 0;
}