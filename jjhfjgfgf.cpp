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
		string a, b;
		cin >> a >> b;
		ll num1 = 0, num2 = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				num1++;
			}
			if (a[i] != b[n - i - 1]) {
				num2++;
			}
		}
		ll change = min(num1, num2);
		if (num1 == num2) {
			cout << max(0LL, (change - 1) * 2 + 1) << endl;
		}
		else if (change == n) {
			cout << (n * 2) - 1 << endl;
		}
		else if (change == 0) {
			if (change == num1) {
				cout << 0 << endl;
			}
			else {
				cout << 2 << endl;
			}
		}
		else {
			if (change == num1) {
				if (change & 1) {
					cout << (change - 1) * 2 + 1 << endl;
				}
				else {
					cout << change * 2 << endl;
				}
			}
			else {
				if (change & 1) {
					cout << change * 2 << endl;
				}
				else {
					cout << (change - 1) * 2 + 1 << endl;
				}
			}
		}
	}


	return 0;
}