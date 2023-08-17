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
	ll n, k;
	cin >> n >> k;
	vector<vector<char>> v(n + 1, vector<char> (n + 1, 0));
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			char x;
			cin >> x;
			v[i][j] = x;
		}
	}
	// for (int i = 1; i < n + 1; i++) {
	// 	for (int j = 1; j < n + 1; j++) {
	// 		cout << v[i][j];
	// 	}
	// 	cout << endl;
	// }
	map<pair<ll, ll>, ll> mp;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (v[i][j] == '.') {
				if (j + k - 1 <= n) {
					ll ctr1 = 0;
					for (int l = j; l < j + k ; l++) {
						if (v[i][l] == '.') {
							ctr1++;
						}
					}
					if (ctr1 == k) {
						for (int l = j; l < j + k; l++) {
							mp[ {i, l}]++;
						}
					}
				}
				if (i + k - 1 <= n) {
					ll ctr2 = 0;
					for (int l = i; l < i + k; l++) {
						if (v[l][j] == '.') {
							ctr2++;
						}
					}
					if (ctr2 == k) {
						for (int l = i; l < i + k; l++) {
							mp[ {l, j}]++;
						}
					}
				}
			}
		}
	}
	pair<ll, ll> p = {1, 1};
	ll mx = 0;
	for (auto x : mp) {
		if (x.second > mx) {
			mx = x.second;
			p = {x.first.first, x.first.second};
		}
	}
	cout << p.first << " " << p.second << endl;


	return 0;
}