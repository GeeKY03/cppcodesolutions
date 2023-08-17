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


void chk(int x, int y, vector<vector<char>> &v) {
	// map<int,int> mp;
	for (int i = x; i < x + 3; i++) {
		for (int j = y; j < y + 3; j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	vector<vector<char>> v;
	for (int i = 0; i < 9; i++) {
		vector<char> c;
		for (int j = 0; j < 9; j++) {
			char x;
			cin >> x;
			c.pb(x);
		}
		v.pb(c);
	}

	vi temp = {0, 3, 6};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			chk(temp[i], temp[j], v);
			cout << endl;
		}
		cout << endl;
	}

	map<int, int> r, c;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (v[i][j] != '.') {
				cout << v[i][j] << " ";
			}
		}
	}


	return 0;
}