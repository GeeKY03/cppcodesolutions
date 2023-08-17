#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

const int mod = 1e9 + 7;

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, c, l, r;
		cin >> a >> b >> c >> l >> r;
		ll num = 0;
		ll x1 = (l * (l - 1) * 1LL) / 2;
		ll x2 = (r * (r + 1) * 1LL) / 2;
		num += ((x2 - x1) * b) % mod;
		num += c * (r - l + 1) % mod;
		ll y1 = (((l * (l - 1) * 1LL) % mod) * ((2 * l)) % mod) / 6;
		ll y2 = (((r * (r + 1) * 1LL) % mod) * ((2 * r) + 1) % mod) / 6;
		// cout << y1 << " " << y2 << endl;
		num += (y2 - y1) % mod;
		cout << num << endl;
	}


	return 0;
}