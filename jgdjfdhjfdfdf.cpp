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
		vi v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		int flag = 0;
		ll ans = 0;
		sort(v.begin(), v.end());
		for (int i = 1; i <= 1024; i++) {
			vi v2;
			for (int j = 0; j < n; j++) {
				int res = (i ^ v[j]);
				v2.pb(res);
			}
			sort(v2.begin(), v2.end());
			if (v == v2) {
				ans = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			cout << ans << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}