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
	ll n;
	cin >> n;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
	ll num = 1;
	ll ans = 1;
	ll sz = v.size();
	for (int i = 0; i < sz; i++) {
		if (v[i] <= 0) {
			continue;
		}
		else {
			if (v[i] != num) {
				ans = num;
				break;
			}
			else {
				num++;
			}
		}
		if (i == sz - 1) {
			ans = num;
		}
	}
	if (ans == v[sz - 1]) {
		ans++;
	}
	cout << ans << endl;


	return 0;
}