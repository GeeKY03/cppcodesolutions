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
		ll n, c;
		cin >> n >> c;
		vi v(101, 0);
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v[x]++;
		}
		ll res = 0;
		// sort(v.begin(), v.end());
		for (ll x : v) {
			// cout << x << " ";
			res += min(x, c);
		}
		cout << res << endl;
	}


	return 0;
}