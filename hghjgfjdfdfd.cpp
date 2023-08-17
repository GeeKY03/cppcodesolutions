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
		ll ans = 0;
		int flag = 0;
		for (int i = 0; i < n; i++) {
			ll res = 0;
			for (int j = 0; j < n; j++) {
				if (j != i) {
					res = (res ^ v[j]);
				}
				if (res == v[i]) {
					cout << v[i] << endl;
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
	}


	return 0;
}