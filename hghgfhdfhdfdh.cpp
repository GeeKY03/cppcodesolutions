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
		ll n1 = 1, n2 = 2;
		vector<vector<ll>> grid(n, vector<ll> (n, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (n1 <= (n * n)) {
					grid[i][j] = n1;
					n1 += 2;
				}
				else {
					grid[i][j] = n2;
					n2 += 2;
				}
			}
		}





		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}