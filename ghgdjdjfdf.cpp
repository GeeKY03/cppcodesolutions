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
	vector<vector<int>> v;
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int i = 0; i < m; i++) {
			ll x;
			cin >> x;
			temp.pb(x);
		}
		v.pb(temp);
	}
	int res = 0, row = 0;
	for (int i = 0; i < n; i++) {
		auto it = upper_bound(v[i].begin(), v[i].end(), 0);
		int ind = distance(v[i].begin(), it);
		if (m - ind > res) {
			res = m - ind;
			row = i;
		}
	}
	cout << row << endl;


	return 0;
}