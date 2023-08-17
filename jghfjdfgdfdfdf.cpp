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
		ll n, m;
		cin >> n >> m;
		int flag = 0;
		if (n == 1) {
			cout << "Yes" << endl;
			cout << m << endl;
		}
		else if (n > m) {
			cout << "No" << endl;
		}
		else if ((m & 1) && (n % 2 == 0)) {
			cout << "No" << endl;
		}
		else if (n == m) {
			cout << "Yes" << endl;
			for (int i = 0; i < m; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else {
			if (n & 1) {
				cout << "Yes" << endl;
				for (int i = 0; i < n - 1; i++) {
					cout << 1 << " ";
				}
				cout << m - n + 1 << endl;
			}
			else {
				if (m % n == 0) {
					ll q = m / n;
					cout << "Yes" << endl;
					for (int i = 0; i < n; i++) {
						cout << q << " ";
					}
					cout << endl;
				}
				else {
					cout << "Yes" << endl;
					for (int i = 0; i < n - 2; i++) {
						cout << 1 << " ";
					}
					cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
				}
			}
		}
	}


	return 0;
}