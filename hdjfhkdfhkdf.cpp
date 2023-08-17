#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a /* %m*/ ;
		}
		a = a * a /* %m */ ;
		b >>= 1;
	}
	return res;
}


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
		int ind = 0;
		map<ll, ll> mp;
		vi fact;
		ll n1 = sqrt(n);
		ll temp = n;
		for (int i = 2; i <= n1; i++) {
			while (n > 1) {
				if (n % i == 0) {
					n /= i;
					mp[i]++;
					fact.pb(i);
				}
				else {
					break;
				}
			}
		}

		if ((n > 1) ) {
			mp[n]++;
			fact.pb(n);
		}


		vector<pair<int, int>> vp;
		ll sum = 0;
		if (mp.size() > 0) {
			for (auto x : mp) {
				ll a = x.first;
				ll b = x.second;
				sum += b;
				vp.pb({b, a});
			}
		}

		// for (auto x : vp) {
		// 	cout << x.first << " " << x.second << endl;
		// }
		for (auto x : fact)
			sort(vp.rbegin(), vp.rend());
		if ((vp.size() == 1) && (sum >= 6)) {
			cout << "YES" << endl;
			ll mul = 1;
			cout << fact[0] << " " << fact[1]*fact[2] << " ";
			for (int i = 3; i < sum; i++) {
				mul *= fact[i];
			}
			cout << mul << endl;
		}
		else if ((vp.size() == 2) && (sum >= 4)) {
			cout << "YES" << endl;
			set<ll> sett1;
			sett1.insert(fact[0]);
			sett1.insert(fact[1]*fact[2]);
			ll mul = 1;
			for (int i = 3; i < sum; i++) {
				mul *= fact[i];
			}
			sett1.insert(mul);
			if (sett1.size() == 3) {
				for (auto x : sett1) {
					cout << x << " ";
				}
				cout << endl;
			}
			else {
				set<ll> sett2;
				sort(fact.rbegin(), fact.rend());
				sett2.insert(fact[0]);
				sett2.insert(fact[1]*fact[2]);
				ll mul = 1;
				for (int i = 3; i < sum; i++) {
					mul *= fact[i];
				}
				sett2.insert(mul);
				for (auto x : sett2) {
					cout << x << " ";
				}
				cout << endl;
			}
		}
		else if ((vp.size() >= 3)) {
			cout << "YES" << endl;
			cout << binexp(vp[0].second, vp[0].first) << " " << binexp(vp[1].second, vp[1].first) << " ";
			ll mul = 1;
			for (int i = 2; i < vp.size(); i++) {
				mul *= binexp(vp[i].second, vp[i].first);
			}
			cout << mul << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}