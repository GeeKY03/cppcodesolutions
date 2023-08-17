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

int m = 0, n = 0;

void FloodFill(vector<vector<int>>& image, int i, int j, int ch, int col) {
	int dx[] = { -1, 0, 1, 0};
	int dy[] = {0, -1, 0, 1};

	if ((i < 0) || (i >= m) || (j < 0) || (j >= n)) {
		return;
	}

	if (image[i][j] != ch) {
		return;
	}

	image[i][j] = col;
	for (int k = 0; k < 4; k++) {
		FloodFill(image, i + dx[k], j + dy[k], ch, col);
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> m >> n;
	vector<vector<int>> image(m, vector<int> (n, 0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			ll x;
			cin >> x;
			image[i][j] = x;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << image[i][j] << " ";
		}
		cout << endl;
	}
	FloodFill(image, 1, 1, 1, 2);
	cout << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << image[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}