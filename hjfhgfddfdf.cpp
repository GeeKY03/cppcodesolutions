#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll subset(ll n, vi v) {
	ll res = 1;
	ll j = 0;
	while (n > 0) {
		if (n & 1) {
			res = res * v[j];
		}
		j++;
		n >>= 1;
	}
	return res;
}

ll gen_sub(vector<int> v, vector<int> &v2) {
	ll ans = 0;
	ll n = v.size();
	ll num = (1 << n) - 1;
	for (int i = 1; i <= num; i++) {
		ll res = subset(i, v);
		ll bc = __builtin_popcountll(i);
		if (bc & 1) {
			ans += (999 / res);
		}
		else {
			ans -= (999 / res);
		}
		// cout << (999 / res) << endl;
		v2.pb(res);
	}
	return ans;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin >> n;
	vi v;
	vi v2;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	// let's find the numbers divisible by 2,3,5 bt=etween 1 to 1000
	ll ans = gen_sub(v, v2);
	// for (auto x : v2) {
	// 	cout << x << " ";
	// }
	// cout << endl;
	cout << ans << endl;





	return 0;
}