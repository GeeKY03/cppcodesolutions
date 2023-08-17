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
		ll n;
		cin >> n;
		ll z = 0, o = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x == 1) {
				o++;
			}
			else {
				z++;
			}
		}
		if (o == z) {
			cout << 0 << endl;
		}
		else if (n & 1) {
			cout << -1 << endl;
		}
		else {
			if (o == 0) {
				cout << -1 << endl;
			}
			else if (z == 0) {
				if (n == 2) {
					cout << -1 << endl;
				}
				else {
					if ((n / 2) & 1) {
						cout << (((n / 2) + 1) / 2) + 1 << endl;
					}
					else {
						cout << n / 4 << endl;
					}
				}
			}
			else {
				if (z > o) {
					cout << (n / 2) - o << endl;
				}
				else {
					if (((n / 2) - z) & 1) {
						cout << (((n / 2) - z) / 2) + 2 << endl;
					}
					else {
						cout << ((n / 2) - z) / 2 << endl;
					}
				}
			}
		}
	}


	return 0;
}