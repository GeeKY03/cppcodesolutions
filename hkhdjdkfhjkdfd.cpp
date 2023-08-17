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
		map<ll, ll> mp;
		vlli v;

		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mp[x]++;
			v.pb(x);
		}
		vi v3;
		for (int i = 0; i < n; i++) {
			if (mp[v[i]] > 1) {
				v3.pb(-1);
			}
			else {
				v3.pb(1);
			}
		}
		for (auto x : v3) {
			cout << x << " ";
		}
		cout << endl;
		stack<int> s;
		ll ctr = 0;
		for (int i = 0; i < v3.size(); i++) {
			if (v3[i] = -1) {
				if (s.size() == 0) {
					s.push(-1);
					ctr++;
				}
				else {
					s.pop();
				}
			}
			else {
				if (s.size() == 0) {
					ctr++;
				}
			}
		}
		cout << ctr << endl;
		if (ctr <= 2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}