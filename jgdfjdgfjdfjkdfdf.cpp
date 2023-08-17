#include<bits/stdc++.h>
using namespace std;
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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t = 1;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		if (k == 0) {
			if (n > 1) {
				cout << -1 << " " << -1 << endl;
			}
			else {
				cout << 0 << " " << 0 << endl;
			}
		}
		else if (k > (9 * n)) {
			cout << -1 << " " << -1 << endl;
		}
		else {
			vi v1(n, 0); // for max
			vi v2(n, 0); // for min
			ll temp = k;
			for (int i = 0; i < n; i++) {
				if (k >= 9) {
					v1[i] += 9;
					k -= 9;
				}
				else {
					v1[i] += k;
					k = 0;
				}
			}
			v2[0] = 1;
			temp--;
			for (int i = n - 1; i >= 0; i--) {
				if (temp >= 9) {
					v2[i] += 9;
					temp -= 9;
				}
				else {
					v2[i] += temp;
					temp = 0;
				}
			}
			for (auto x : v2) {
				cout << x;
			}
			cout << " ";
			// printing max
			for (auto x : v1) {
				cout << x;
			}
			cout << endl;
		}
	}


	return 0;
}