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
		ll n, k;
		cin >> n >> k;
		if (k > n) {
			cout << "NO" << endl;
		}
		else if (k == n) {
			cout << "YES" << endl;
			for (int i = 0; i < k; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else if (n % 2 == 0) {
			ll check = 2 * k;
			if (2 * k > n) {
				ll num = 3;
				ll ans = -1;
				for (int i = 1; i < k; i++) {
					if (num + (k - i) & 1) {
						num += 3;
					}
					else {
						if (num + (k - i) == n) {
							ans = k - i;
							break;
						}
						else {
							num += 3;
						}
					}
				}
				if (ans == -1) {
					cout << "NO" << endl;
				}
				else {
					cout << "YES" << endl;
					for (int i = 0; i < ans; i++) {
						cout << 1 << " ";
					}
					for (int i = 0; i < (k - ans); i++) {
						cout << 3 << " ";
					}
					cout << endl;
				}
			}
			else {
				cout << "YES" << endl;
				for (int i = 0; i < k - 1; i++) {
					cout << 2 << " ";
				}
				cout << n - check + 2 << endl;
			}
		}
		else {
			if (k % 2 == 0) {
				cout << "NO" << endl;
			}
			else {
				cout << "YES" << endl;
				for (int i = 0; i < k - 1; i++) {
					cout << 1 << " ";
				}
				cout << n - k + 1 << endl;
			}
		}
	}


	return 0;
}