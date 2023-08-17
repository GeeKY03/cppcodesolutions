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
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				cout << 1 << endl;
			}
			else {
				for (int j = 0; j < i; j++) {
					if ((j == 0)) {
						cout << 1 << " ";
					}
					else if (j == i - 1) {
						cout << 1 << endl;
					}
					else {
						cout << 0 << " ";
					}
				}
			}
		}
	}


	return 0;
}