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
		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < n; j++) {
		// 		cout << arr[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int ctr = 0;
				if (i < k) {
					for (int l = 0; l < k; l++) {
						if (arr[l][j] == 1) {
							ctr++;
						}
					}
				}
				if (j < k) {
					for (int l = 0; l < k; l++) {
						if (arr[i][l] == 1) {
							ctr++;
						}
					}
				}
				if (i >= k) {
					for (int l = i + 1; l > i - k  ; l--) {
						if (arr[l][j] == 1) {
							ctr++;
						}
					}
				}
				if (j >= k) {
					for (int l = j + 1; l > j - k  ; l--) {
						if (arr[i][l] == 1) {
							ctr++;
						}
					}
				}
				if (ctr > 0) {
					continue;
				}
				else {
					arr[i][j] = 1;
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