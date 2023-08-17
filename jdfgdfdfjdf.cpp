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
		vector<vector<ll>> v(9, vector<ll>(9, 0));
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				char x;
				cin >> x;
				v[i][j] = x - 48;
			}
		}
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (v[i][j] == 2) {
					v[i][j] = 1;
				}
			}
		}
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << v[i][j] << "";
			}
			cout << endl;
		}

	}


	return 0;
}