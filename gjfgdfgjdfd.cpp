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
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		if (n == 2) {
			cout << v[0] << " " << v[1] << endl;
		}
		else {
			for (int i = 1; i < n - 1; i++) {
				ll a = abs(v[i] - v[i - 1]) + abs(v[i] - v[i + 1]);
				ll b = abs(v[i - 1] - v[i + 1]);
				if (b >= a) {
					v[i] = -1;
					i++;
				}
			}
			ll ctr = 0;
			for (auto x : v) {
				if (x != -1) {
					ctr++;
				}
			}
			cout << ctr << endl;
			for (auto x : v) {
				if (x == -1) {
					continue;
				}
				else {
					cout << x << " ";
				}
			}
			cout << endl;
		}
	}


	return 0;
}