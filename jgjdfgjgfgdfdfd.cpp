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
		ll n;
		cin >> n;
		if (n == 3) {
			cout << -1 << endl;
		}
		else if (n % 2 == 0) {
			for (int i = n; i >= 1; i--) {
				cout << i << " ";
			}
			cout << endl;
		}
		else {
			cout << n - 1 << " " << n << " ";
			for (int i = 1; i <= n - 2; i++) {
				cout << i << " ";
			}
			cout << endl;
		}
	}


	return 0;
}