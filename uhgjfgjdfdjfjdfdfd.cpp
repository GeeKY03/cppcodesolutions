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
		sort(v.begin(), v.end());
		set<int> s;
		for (int i = 2; i < n; i++) {
			ll y = abs(v[i] - v[i - 1]);
			ll z = abs(v[i - 1] - v[i - 2]);
			s.insert(y + z);
		}
		for (auto x : s) {
			cout << x << endl;
			break;
		}
	}


	return 0;
}