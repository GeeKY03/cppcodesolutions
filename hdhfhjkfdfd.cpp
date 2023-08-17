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
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		bool chk = false;
		ll ind1 = -1, ind2 = -1;
		for (int i = 0; i < n; i++) {
			ll no = 0;
			for (int j = i; j < n; j++) {
				no += v[i];
				if (no % n == 0) {
					ind1 = i;
					ind2 = j;
					chk = true;
					break;
				}
			}
		}
		if (chk) {
			cout << ind2 - ind1 + 1 << endl;
			for (int i = ind1; i <= ind2; i++) {
				cout << i + 1 << " ";
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}


	return 0;
}