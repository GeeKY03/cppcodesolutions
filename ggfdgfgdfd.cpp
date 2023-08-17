#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t = 1;
	while (t--) {
		ll n;
		cin >> n;
		vector<pair<ll, ll>> vp;
		for (int i = 0; i < n; i++) {
			ll x, y;
			cin >> x >> y;
			vp.pb({x, y});
		}
		for (auto x : vp) {
			ll a = x.ff;
			ll b = x.ss;
			ll ctr = 0;
			if (abs(a - b) == 1) {
				cout << -1 << endl;
			}
			else {
				while (__gcd(a, b) == 1) {
					ctr++;
					a++;
					b++;
				}
				cout << ctr << endl;
			}
		}
	}


	return 0;
}