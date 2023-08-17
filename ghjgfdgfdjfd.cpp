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
		vlli v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll chk = false;
		ll ctr = 0;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				chk = true;
			}
			ll tempsum = 0 + sum;
			if (chk == true) {
				if (i == n - 1) {
					ctr++;
				}
				else {
					for (int j = i; j < n; j++) {
						tempsum += v[i];
						if (tempsum * sum * 1LL > 0) {
							tempsum += v[i];
						}
						else if (tempsum * sum * 1LL == 0) {
							ctr++;
						}
						else {
							ctr++;
							sum = 0;
							chk = false;
						}
					}
				}
			}
			else {
				sum += v[i];
			}
		}
		cout << ctr << endl;
	}


	return 0;
}