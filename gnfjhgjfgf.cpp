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
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int fe = a[0];
		cout << 1;
		int fl = 0;
		int le = a[0];
		for (int i = 1; i < n; i++) {
			if (a[i] >= le && fl == 0) {
				cout << 1;
				le = a[i];
			}
			else if (a[i] <= fe && fl == 0) {
				cout << 1;
				fl = 1;
				fe = a[i];
			}
			else if (a[i] >= fe && a[i] <= a[0]) {
				cout << 1;
				fe = a[i];
			}
			else {
				cout << 0;
			}
		}
		cout << endl;
	}




	return 0;
}