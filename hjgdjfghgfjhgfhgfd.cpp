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
		int flag = 0;
		ll add = 0;
		ll ctr = 0;
		for (int i = (n + 1) / 2; i < n; i++) {
			if (v[i] < (v[n - 1 - i] + add)) {
				flag = 1;
				break;
			}
			else {
				ctr += v[i] - (v[n - 1 - i] + ctr);
			}
		}
		if (flag) {
			cout << -1 << endl;
		}
		else {
			cout << ctr << endl;
		}
	}


	return 0;
}