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
	ll n;
	cin >> n;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	string ans;
	for (int i = 0; i < 31; i++) {
		int mask = 1 << i;
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += (mask & v[j]);
		}
		if (sum % 3 == 0) {
			ans.pb('0');
		}
		else {
			ans.pb('1');
		}
	}
	ll fans = 0;
	// cout << ans << endl;
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] == '1') {
			fans += binexp(2, i);
		}
	}
	cout << fans << endl;



	return 0;
}