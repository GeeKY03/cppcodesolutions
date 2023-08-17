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
		ll n, k, r, c;
		cin >> n >> k >> r >> c;
		int arr[n][n] = {0};
		for (int i = 0; i < n; i++) {
			arr[0][i] = 0;
		}
		arr[r - 1][c - 1] = 1;
		for (int i = r - 1; i >= 0; i--) {
			for (int j = c - 1; j < n; j ++) {
				ll x = 0;
				while (j + x  < n) {
					arr[i][j + x] = 1;
					x += k;
				}
				if (j == n - 1) {
					i = 0;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}