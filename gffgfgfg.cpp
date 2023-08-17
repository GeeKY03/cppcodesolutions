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
	ll t;
	cin >> t;
	while (t--) {
		ll n, k, x;
		cin >> n >> k >> x;
		if (x != 1) {
			cout << "YES" << endl;
			cout << n << endl;
			for (int i = 1; i <= n; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else {
			if (n & 1) {
				if (k <= 2) {
					cout << "NO" << endl;
				}
				else {
					ll sum = 3;
					while (sum < n) {
						sum += 2;
					}
					if (sum == n) {
						cout << "YES" << endl;
						cout << n / 2 << endl;
						cout << 3 << " ";
						for (int i = 1; i < n / 2; i++) {
							cout << 2 << " ";
						}
						cout << endl;
					}
					else {
						cout << "NO" << endl;
					}
				}
			}
			else {
				if (k < 2) {
					cout << "NO" << endl;
				}
				else {

					cout << "YES" << endl;
					cout << n / 2 << endl;
					for (int i = 1; i <= n / 2; i++) {
						cout << 2 << " ";
					}
					cout << endl;
				}
			}
		}
	}


	return 0;
}