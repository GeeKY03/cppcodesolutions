#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll binexp(ll a, ll b , ll m) {

	ll res = 1;
	a %= m;
	while (b > 0) {
		if (b & 1) {
			res = res * a  % m ;
		}
		a = a * a % m  ;
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
		ll n, k;
		cin >> n >> k;
		string s;
		while (k > 0) {
			if (k & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			k >>= 1;
		}
		ll res = 0;
		// cout << s << endl;
		for (int i = 0; i < s.size(); i++) {
			res += ((binexp(n, i, 1000000007) % 1000000007) * (s[i] - 48)) % 1000000007;
			res = res % 1000000007;
		}
		cout << res % 1000000007 << endl;
	}


	return 0;
}