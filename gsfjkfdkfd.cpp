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
	ll t = 1;;
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
		if (n >= 130) {
			cout << "YES" << endl;
		}
		else {
			for (int i = 0; i < n - 3; i++) {
				for (int j = i + 1; j < n - 2; j++) {
					for (int k = j + 1; k < n - 1; k++) {
						for (int l = k + 1; l < n; l++) {
							cout << v[i] << " " << v[j] << " " << v[k] << " " << v[l] << endl;
							ll x = (v[i] ^ v[j] ^ v[k] ^ v[l]);
							if (x == 0) {
								chk = true;
							}
						}
					}
				}
			}
			if (chk) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}

	}


	return 0;
}