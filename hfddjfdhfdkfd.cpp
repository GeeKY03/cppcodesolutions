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
		string s;
		ll k;
		cin >> s >> k;
		ll n = s.size();
		ll sel = n - k;
		vlli v, v1;
		for (int i = 0; i < n; i++) {
			v.pb(s[i] - 48);
			v1.pb(s[i] - 48);
		}
		map<ll, multiset<ll>> l;
		ll temp = k;
		ll ind = sel ;
		for (int i = 0; i < sel; i++) {
			ll num = s[i] - 48;
			l[num].insert(i);
		}
		// delete the entry once set gets empty
		while (temp > 0) {
			auto it = l.end();
			it--;
			ll mxval = it->first;
			// break;
			if (!l[mxval].empty()) {
				// delete the entry once used
				auto it2 = l[mxval].end();
				it2--;
				v[*it2] = -1;
				l[mxval].erase(it2);
				temp--;
				l[s[ind] - 48].insert(ind);
				ind++;
			}
			else {
				l.erase(it);
			}
		}
		string res;
		ll zind = -1;
		bool chk = false;
		for (int i = 0; i < n; i++) {
			if (v[i] != -1) {
				res.pb(char(v[i] + 48));
			}
		}
		for (int i = 0; i < n; i++) {
			if (v1[i] == 0) {
				zind = i;
				break;
			}
		}
		if (res[0] == '0') {
			ll be = INT_MAX;
			for (int i = 0; i < zind; i++) {
				if (v1[i] != -1) {
					be = min(v1[i], be);
				}
			}
			auto de = max_element(res.begin(), res.end());
			res.erase(de);
			cout << char(be + 48) + res << endl;
		}
		else {
			cout << res << endl;
		}
	}


	return 0;
}