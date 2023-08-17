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
		ll n, k;
		cin >> n >> k;
		vector<pair<int, int>> vp;
		ll ctr = 1;
		vp.pb({1, n});
		vp.pb({n, 1});
		for (int i = 2; i <= sqrt(n) + 1; i++) {
			if (n % i == 0) {
				vp.pb({i, n / i});
				vp.pb({n / i, i});
			}
		}
		sort(vp.begin(), vp.end());
		for (auto x : vp) {
			if (x.second <= k) {
				cout << x.first << endl;
				break;
			}
		}
	}


	return 0;
}