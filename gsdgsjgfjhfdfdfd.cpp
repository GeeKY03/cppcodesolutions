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
		if (n & 1) {
			for (int i = 1; i <= n; i++) {
				if (!(i & 1) && (i < n - 2)) {
					cout << i + 1 << " " << i << " ";
					i++;
				}
				else {
					cout << i << " ";
				}
			}
		}
		else {
			for (int i = 1; i <= n; i++) {
				if (((i & 1)) && (i < n - 2)) {
					cout << i + 1 << " " << i << " ";
					i++;
				}
				else {
					cout << i << " ";
				}
			}
		}
		cout << endl;
	}


	return 0;
}