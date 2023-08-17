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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vlli v;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			sum += x;
		}
		if (sum % 2 == 0) {
			cout << 0 << endl;
		}
		else {
			set<ll> sett;
			for (int i = 0; i < n; i++) {
				if (v[i] & 1) {
					ll ctr = 0;
					while (v[i] & 1) {
						v[i] /= 2;
						ctr++;
					}
					sett.insert(ctr);
				}
				else {
					ll ctr = 0;
					while (v[i] % 2 == 0) {
						v[i] /= 2;
						ctr++;
					}
					sett.insert(ctr);
				}
			}
			for (auto x : sett) {
				cout << x << endl; break;
			}
		}
	}


	return 0;
}