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
		vi v1;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v1.pb(x);
		}
		vi v2;
		for (int i = 0; i < n; i++) {
			ll x = 1;
			while (x < v1[i]) {
				x *= 2;
			}
			v2.pb(x);
		}
		for (auto x : v2) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}