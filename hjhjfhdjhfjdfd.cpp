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
		// arr[r - 1][c - 1] = 1;
		int j = c - 1;
		for (int i = r - 1; i >= 0; i--) {
			arr[i][j] = 1;
			j++;
			ll x = k - 1;
			while (j + x < n) {
				arr[i][j + x] = 1;
				x += k;
			}
			x = k + 1 ;
			while (j - x >= 0) {
				arr[i][j - x] = 1;
				x += k;
			}


		}
		j = c - 2;
		for (int i = r; i < n; i++) {
			ll x = 0;
			while (j - x >= 0) {
				arr[i][j - x] = 1;
				x += k;
			}
			x = k;
			while (j + x < n) {
				arr[i][j + x] = 1;
				x += k;
			}
			j--;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1) {
					cout << 'X' ;
				}
				else {
					cout << '.';
				}
			}
			cout << endl;
		}

	}


	return 0;
}