#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vlli v1, v2;
		ll s1 = 0, s2 = 0, ps1 = 0, ps2 = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			s1 += x;
			v1.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			s2 += x;
			v2.pb(x);
		}
		vlli val;
		ps1 += v1[0];
		val.pb(s1 - ps1);
		for (int i = 1; i < n; i++) {
			ps2 += v2[i - 1];
			ps1 += v1[i];
			val.pb(max(ps2, s1 - ps1));
		}
		sort(all(val));
		cout << val[0] << endl;
	}


	return 0;
}