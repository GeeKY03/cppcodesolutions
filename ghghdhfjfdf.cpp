#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

bool canPlace(vector<vector<int>> &mat, ll i, ll j, ll n, ll number) {

	// Row and column check
	for (int x = 0; x < n; x++) {
		if (mat[x][j] == number || mat[i][x] == number) {
			return false;
		}
	}

	ll rn = sqrt(n);
	ll sx = (i / rn) * rn;
	ll sy = (j / rn) * rn;

	// checking in the sub-grid
	for (int x = sx; x < sx + rn; x++) {
		for (int y = sy; y < sy + rn; y++) {
			if (mat[x][y] == number) {
				return false;
			}
		}
	}

	return true;
}

bool solveSudoku(vector<vector<int>> &mat, ll i, ll j, ll n) {

	// Base case
	if (i == n) {
		/* since we're solving row wise, if we reach the n th column
		it would mean that all n-1 rows, i.e. the entire sudoku has been solved*/

		// Print the sudoku
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	// Case: Row end
	// if a row ends then we need to move to the starting of the next row
	if (j == n) {
		return solveSudoku(mat, i + 1, 0, n);
	}

	// Skip the pre-filled cells
	if (mat[i][j] != 0) {
		return solveSudoku(mat, i, j + 1, n);
	}

	// Recursive case
	// Fill te empty cell with all possible options
	for (int number = 1; number <= 9; number++) {
		if (canPlace(mat, i, j, n, number)) {
			// Assume
			mat[i][j] = number;

			bool couldWeSolve = solveSudoku(mat, i, j, n);
			if (couldWeSolve == true) {
				return true;
			}
		}
	}

	// Backtrack
	mat[i][j] = 0;
	return false;
}



int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vector<vector<int>> mat(9, vector<int> (9, 0));
	mat = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9},
	};
	// solveSudoku(matrix_name, i'th row, j'th column, matrix size);
	solveSudoku(mat, 0, 0, 9);


	return 0;
}