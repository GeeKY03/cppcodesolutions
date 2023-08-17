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
		if (n == 1) {
			cout << 1 << endl;
		}
		else if (n == 2) {
			cout << 4 << endl;
		}
		else if (n == 3) {
			cout << 7 << endl;
		}
		else if (n == 4) {
			cout << 10 << endl;
		}
		else {
			cout << 10 + (n - 4) << endl;
		}
	}


	return 0;
}