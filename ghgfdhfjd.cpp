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
		map<ll, list<ll>> l;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			l[x].pb(i + 1);
		}
		if (l.size() == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			ll fgf = 0;
			for (auto x : l) {
				for (auto y : l[x.ff]) {
					fgf = y;
					break;
				}
				break;
			}
			bool skip = true;
			for (auto x : l) {
				if (skip) {
					skip = false;
					continue;
				}
				else {
					for (auto y : l[x.ff]) {
						cout << fgf << " " << y << endl;
					}
				}
			}
			ll sgf = 0;
			skip = true;
			for (auto x : l) {
				if (skip) {
					skip = false;
					continue;
				}
				else {
					for (auto y : l[x.ff]) {
						sgf = y;
						break;
					}
				}
				if (skip == false) {
					break;
				}
			}
			skip = true;
			for (auto x : l) {
				for (auto y : l[x.ff]) {
					if (skip) {
						skip = false;
					}
					else {
						cout << sgf << " " << y << endl;
					}
				}
				break;
			}
		}
	}


	return 0;
}