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
		string s1, s2;
		cin >> s1 >> s2;
		vector<pair<int, int>> vp;

		for (int i = 0; i < n; i++) {
			ll a, b;
			if (s1[i] < s2[i]) {
				a = s2[i] - s1[i];
				b = a - 26;
			}
			else {
				a = 26 - (s1[i] - s2[i]);
				b = a - 26;
			}
			vp.pb({a, b});
		}
		// for (auto x : vp) {
		// 	cout << x.first << " " << x.second << endl;
		// }
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			if (abs(sum + vp[i].first) > abs(sum + vp[i].second)) {
				sum += vp[i].second;
			}
			else {
				sum += vp[i].first;
			}
		}
		cout << abs(sum) << endl;
	}


	return 0;
}