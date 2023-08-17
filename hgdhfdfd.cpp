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
		ll ctr = -1;
		// ll temp = n;
		while ((1 << (ctr + 1) <= n - 1)) {
			ctr++;
			// temp >>= 1;
		}
		// cout << ctr << endl;
		// ctr--;
		ll count = 1;
		while ((1 << ctr) - count >= 0) {
			cout << (1 << ctr) - count << " ";
			count++;
		}
		count = 0;
		while (((1 << ctr) + count) < n ) {
			cout << (1 << ctr) + count << " ";
			count++;
		}
		cout << endl;
	}


	return 0;
}