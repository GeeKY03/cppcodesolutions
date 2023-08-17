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
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> grid(n, vector<ll> (m, 0));
		cout << n*m << endl;
		ll temp = n;
		ll ref = 1;
		ll x = 0, y = 0;
		while (temp--)
		{
			int temp = ref;
			for (int k = 0; k < 10; k++) {
				temp *= 2;
			}
			for (int j = 0; j < m; j++) {
				grid[x][j] = j + 1 + temp;
			}
			ref++;
			x++;
		}



		for (auto x : grid) {
			for (auto y : x) {
				cout << y << " ";
			}
			cout << endl;
		}
	}


	return 0;
}