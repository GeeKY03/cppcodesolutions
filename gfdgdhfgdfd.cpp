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
		vlli v;
		ll p = 0, ne = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x > 0) {
				p++;
			}
			else {
				ne++;
			}
		}
		if (p == 0) {
			for (int i = 0; i < n; i++) {
				cout << 0 << " ";
			}
			cout << endl;
			for (int i = 0; i < n; i++) {
				cout << 0 << " ";
			}
			cout << endl;
		}
		else if (ne == 0) {
			for (int i = 1; i <= n; i++) {
				cout << i << " ";
			}
			cout << endl;
			for (int i = 1; i <= n; i++) {
				cout << i << " ";
			}
			cout << endl;
		}
		else {
			if (p >= ne) {
				for (int i = 1; i <= p; i++) {
					cout << i << " ";
				}
				ll left = n - p;
				for (int i = 1; i <= left; i++) {
					cout << p - i << " ";
				}
				cout << endl;
				for (int i = 1; i <= ne; i++) {
					cout << 1 << " " << 0 << " ";
				}
				p -= ne;
				for (int i = 1; i <= p; i++) {
					cout << i << " ";
				}
				cout << endl;
			}
			else {
				for (int i = 1; i <= p; i++) {
					cout << i << " ";
				}
				for (int i = p - 1; i >= 0; i--) {
					cout << i << " ";
				}
				for (int i = 0; i < (n - 2 * p); i++) {
					cout << 0 << " ";
				}
				cout << endl;
				for (int i = 1; i <= p; i++) {
					cout << 1 << " " << 0 << " ";
				}
				for (int i = 1; i <= (n - 2 * p); i++) {
					cout << 0 << " ";
				}
				cout << endl;
			}
		}
	}


	return 0;
}