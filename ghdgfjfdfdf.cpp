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
	ll n, a, b;
	cin >> n >> a >> b;
	if (n == 1) {
		if (a == b) {
			cout << 1 << endl;
			cout << a << ":" << b << endl;
		}
		else {
			cout << 0 << endl;
			cout << a << ":" << b << endl;
		}
	}
	else if (a + b < n) {
		cout << n - (a + b) << endl;
		for (int i = 0; i < a; i++) {
			cout << 1 << ":" << 0 << endl;
		}
		for (int i = 0; i < b; i++) {
			cout << 0 << ":" << 1 << endl;
		}
		for (int i = 0; i < (n - (a + b)); i++) {
			cout << 0 << ":" << 0 << endl;
		}
	}
	else {
		cout << 0 << endl;
		if (a > b) {
			if (a > n) {
				if (b == 0) {
					for (int i = 0; i < n - 2; i++) {
						cout << 1 << ":" << 0 << endl;
					}
					cout << 1 << ":" << 0 << endl;
					cout << a - (n - 2) - 1 << ":" << 0 << endl;
				}
				else {
					for (int i = 0; i < n - 2; i++) {
						cout << 1 << ":" << 0 << endl;
					}
					cout << a - (n - 2) << ":" << 0 << endl;
					cout << 0 << ":" << b << endl;
				}
			}
			else {
				ll x = (a + b) - n;
				cout << x + 1 << ":" << 0 << endl;
				for (int i = 0; i < (a - (x + 1)); i++) {
					cout << 1 << ":" << 0 << endl;
				}
				for (int i = 0; i < b; i++) {
					cout << 0 << ":" << 1 << endl;
				}
			}
		}
		else {
			if (b > n) {
				if (a == 0) {
					for (int i = 0; i < n - 2; i++) {
						cout << 0 << ":" << 1 << endl;
					}
					cout << 0 << ":" << 1 << endl;
					cout << 0 << ":" << b - (n - 2) - 1 << endl;
				}
				else {
					for (int i = 0; i < n - 2; i++) {
						cout << 0 << ":" << 1 << endl;
					}
					cout << 0 << ":" << b - (n - 2) << endl;
					cout << a << ":" << 0 << endl;
				}

			}
			else {
				ll x = (a + b) - n;
				cout << 0 << ":" << x + 1 << endl;
				for (int i = 0; i < (b - (x + 1)); i++) {
					cout << 0 << ":" << 1 << endl;
				}
				for (int i = 0; i < a; i++) {
					cout << 1 << ":" << 0 << endl;
				}
			}
		}



		// if (a > b) {
		// 	cout << 0 << endl;
		// 	ll x = (a + b) - n;
		// 	cout << x + 1 << ":" << 0 << endl;
		// 	for (int i = 0; i < (a - (x + 1)); i++) {
		// 		cout << 1 << ":" << 0 << endl;
		// 	}
		// 	for (int i = 0; i < b; i++) {
		// 		cout << 0 << ":" << 1 << endl;
		// 	}
		// }
		// else {
		// 	cout << 0 << endl;
		// 	ll x = (a + b) - n;
		// 	cout << 0 << ":" << x + 1 << endl;
		// 	for (int i = 0; i < (b - (x + 1)); i++) {
		// 		cout << 0 << ":" << 1 << endl;
		// 	}
		// 	for (int i = 0; i < a; i++) {
		// 		cout << 1 << ":" << 0 << endl;
		// 	}
		// }
	}


	return 0;
}