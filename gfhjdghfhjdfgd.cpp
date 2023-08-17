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
	ll n, m;
	cin >> n >> m;
	map<pair<int, int>, int> mp;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		mp[ {x, y}]++;
	}
	int ctr = 0;
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		if (mp.find({x, y}) == mp.end()) {
			ctr++;
		}
		else {
			mp[ {x, y}]--;
			if (mp[ {x, y}] == 0) {
				mp.erase({x, y});
			}
		}
	}
	cout << ctr << endl;



	return 0;
}