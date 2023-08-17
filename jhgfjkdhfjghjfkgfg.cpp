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

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.ff != b.ff) {
		return a.ff < b.ff;
	}
	return a.ss > b.ss;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		vector<pair<int, int>> vp;
		vector<int> res;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x % k == 0) {
				vp.pb(make_pair(k, i + 1));
			}
			else {
				vp.pb({x % k, i + 1});
			}
		}
		sort(vp.rbegin(), vp.rend(), comp);
		for (auto x : vp) {
			res.pb(x.ss);
		}
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}