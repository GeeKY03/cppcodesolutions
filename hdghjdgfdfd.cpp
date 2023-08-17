#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll bs(vector<pair<int, int>>&v, ll num, ll n) {
	ll l = 0, r = n;
	while (l + 1 < r) {
		ll mid = (l + r) / 2;
		if (v[mid].first == num) {
			return mid + 1;
		}
		else if (v[mid].first > num) {
			r = mid - 1;
		}
		else {
			l = mid + 1 ;
		}
	}
	return l;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, q;
		cin >> n >> q;
		vector<pair<int, int> > v;
		vi max, s;
		ll my = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb({x, i + 1});
			if (my < x) {
				my = x;
			}
			sum += x;
			max.pb(my);
			s.pb(sum);
		}
		sort(v.begin(), v.end());
		while (q--) {
			ll num;
			cin >> num;
			ll res = bs(v, num, n);
			ll fres = res;
			for (int i = res - 1; i < n; i++) {
				if (v[i].first > num) {
					break;
				}
				else if (v[i].first < num) {
					continue;
				}
				else {
					if (max[v[i].second] > num) {
						fres = s[v[res].second];
						break;
					}
					else {
						fres = s[v[i].second];
					}
				}
			}
			cout << fres << endl;
		}
		for (auto x : v) {
			cout << x.first << " " << x.second << endl;
		}



	}


	return 0;
}