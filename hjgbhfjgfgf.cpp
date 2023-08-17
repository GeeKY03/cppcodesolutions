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
		vector<pair<int, int>> vp;
		for (int i = 0; i < n - 1; i++) {
			ll x, y;
			cin >> x >> y;
			vp.pb({x, y});
		}
		ll dc = 1;
		ll ctr = 0;
		vector<int> drawn(n + 1 , 0);
		drawn[1] = 1;
		while (dc < n) {
			ctr++;
			int i = 0;
			while (i < vp.size()) {
				ll x = vp[i].ff, y = vp[i].ss;
				if ((drawn[x] == 1) && (drawn[y] == 1)) {
					vp.erase(vp.begin() + i);
					i--;
				}
				else if ((drawn[x] == 0) && (drawn[y] == 0)) {
					// skip
				}
				else {
					dc++;
					drawn[x] = 1;
					drawn[y] = 1;
				}
				i++;
			}
		}
		cout << ctr << endl;
	}



	return 0;
}