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
		// p=x;     q=y;     p=num
		ll num = 0;
		vector<ll> v, p(n + 1), q(n + 1), pm1(n), pm2(n);
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			p[i + 1] = -1;
			q[i + 1] = -1;
		}
		set<ll> st1, st2;
		for (int i = 0; i < n; i++) {
			pm1[i] = 0;
			pm2[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			if ((p[v[i]]) == -1) {
				p[v[i]] = i;
				pm1[i] = v[i];
			}
			else if (q[v[i]] == -1) {
				q[v[i]] = i;
				pm2[i] = v[i];
			}
			else {
				num = 1;
			}
		}
		// else
		for (int i = 0; i < n; i++) {
			if (p[i + 1] == -1) {
				st1.insert(i + 1);
			}
			if (q[i + 1] == -1) {
				st2.insert(i + 1);
			}
		}
		for (int i = 0; i < n; i++) {
			if (pm1[i] == 0) {
				auto it = st1.ub(pm2[i]);
				if (it == st1.begin()) {
					num = 1;
					break;
				}
				else {
					it--;
					pm1[i] = *it;
					st1.erase(it);
				}
			}
			else {
				auto it2 = st2.ub(pm1[i]);
				if (it2 == st2.begin()) {
					num = 1;
					break;
				}
				else {
					it2--;
					pm2[i] = *it2;
					st2.erase(it2);
				}
			}
		}
		if (num == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (auto x : pm1) {
				cout << x << " ";
			}
			cout << endl;
			for (auto x : pm2) {
				cout << x << " ";
			}
			cout << endl;
		}

	}


	return 0;
}