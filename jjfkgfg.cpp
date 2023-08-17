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
		vi a, b;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		vector<pair<int, int>> vp;
		for (int i = 0; i < n; i++) {
			pair<int, int> p = {b[i], a[i]};
			vp.pb(p);
		}
		sort(vp.begin(), vp.end());
		ll sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += vp[i].first;
			sum += vp[i].second;
		}
		sum += vp[n - 1].second;
		cout << sum << endl;
	}


	return 0;
}