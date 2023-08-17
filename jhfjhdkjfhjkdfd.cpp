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
	ll t = 1;
	// cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		vector<vector<char>> v(n, vector<char> (m, '0'));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> v[i][j];
			}
		}
		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < m; j++) {
		// 		cout << v[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (v[i][j] == '.') {
					if ((i + j) & 1) {
						v[i][j] = 'W';
					}
					else {
						v[i][j] = 'B';
					}
				}
				// if (v[i][j] != '-') {
				// 	if (i == 0) {
				// 		if (j == 0) {
				// 			v[i][j] = 'B';
				// 		}
				// 		else {
				// 			if (v[i][j - 1] == 'B') {
				// 				v[i][j] = 'W';
				// 			}
				// 			else {
				// 				v[i][j] = 'B';
				// 			}
				// 		}
				// 	}
				// 	else if (j == 0) {
				// 		if (v[i - 1][j] == 'B') {
				// 			v[i][j] = 'W';
				// 		}
				// 		else {
				// 			v[i][j] = 'B';
				// 		}
				// 	}
				// 	else {
				// 		if ((v[i - 1][j] == 'B') || (v[i][j - 1] == 'B')) {
				// 			v[i][j] = 'W';
				// 		}
				// 		else {
				// 			v[i][j] = 'B';
				// 		}
				// 	}
				// }
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << v[i][j];
			}
			cout << endl;
		}
	}


	return 0;
}