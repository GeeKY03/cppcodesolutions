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
	ll r, c;
	cin >> r >> c;
	vector<vector<ll>> matrix(r, vector<ll> (c, 0));
	vector<vector<ll>> res(r, vector<ll> (c, 0));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			ll x;
			cin >> x;
			matrix[i][j] = x;
		}
	}
	ll count = 0;
	ll total = r * c;
	ll startingRow = 0;
	ll startingCol = 0;
	ll endingRow = r - 1;
	ll endingCol = c - 1;
	ll num = 0;
	while (count < total)
	{
		for (int index = startingCol; count < total && index <= endingCol; index++)
		{
			num += matrix[startingRow][index];
			res[startingRow][index] = num;
			count++;
		}
		startingRow++;
		for (int index = startingRow; count < total && index <= endingRow; index++)
		{
			num += matrix[index][endingCol];
			res[index][endingCol] = num;
			count++;
		}
		endingCol--;
		for (int index = endingCol; count < total && index >= startingCol; index--)
		{
			num += matrix[endingRow][index];
			res[endingRow][index] = num;
			count++;
		}
		endingRow--;
		for (int index = endingRow; count < total && index >= startingRow; index--)
		{
			num += matrix[index][startingCol];
			res[index][startingCol] = num;
			count++;
		}
		startingCol++;
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}