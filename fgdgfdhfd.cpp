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
			if (a[i] == b[i]) {
				num1++;
			}
			if (a[i] == b[n - i - 1]) {
				num2++;
			}
		}
		ll res = 0;
		ll mx = max(num1, num2);
		ll diff = (n - mx);
		if (mx == num1) {
			if (diff & 1) {
				res = ((diff - 1) * 2) + 1;
			}
			else {
				res = max(0LL, (diff * 2));
			}
		}
		else {
			if (diff & 1) {
				res = diff * 2;
			}
			else {
				res = ((diff - 1) * 2) + 1;
			}
		}
		if (num1 == n) {
			cout << 0 << endl;
		}
		else if (num2 == n) {
			cout << 2 << endl;
		}
		else if (diff == n) {
			if (n == 1) {
				cout << 1 << endl;
			}
			else if (n & 1) {
				cout << diff * 2 << endl;
			}
			else {
				cout << (diff * 2) - 1 << endl;
			}
		}
		else {
			cout << res << endl;
		}
	}


	return 0;
}