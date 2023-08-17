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

		for (int l = 0; l < 100; l++) {
			for (int i = 0; i < n; i++) {
				int count = 0;
				for (int j = 0; j < n; j++) {
					if (((v[i] | v[j]) != (v[i] + v[j])) && (v[i] + v[j] != 1)) {
						ll y = v[i] | v[j];
						v[i] = y - 1;
						v[j] = 1;
						count++;
					}
				}
			}
		}
		ll sum = 0;
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		// cout << sum << endl;
	}


	return 0;
}