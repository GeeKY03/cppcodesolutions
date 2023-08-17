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
		string s1, s2;
		ll a1 = 0, a0 = 0, b1 = 0, b0 = 0;
		for (int i = 0; i < n; i++) {
			char x;
			cin >> x;
			s1.pb(x);
			if (x == '1') {
				a1++;
			}
			else {
				a0++;
			}
		}
		for (int i = 0; i < n; i++) {
			char x;
			cin >> x;
			s2.pb(x);
			if (x == '1') {
				b1++;
			}
			else {
				b0++;
			}
		}
		ll diff = 0;
		for (int i = 0; i < n; i++) {
			if (s1[i] != s2[i]) {
				diff++;
			}
		}
		if (diff == 0) {
			cout << 0 << endl;
		}
		else if (diff == abs(a1 - b1)) {
			cout << diff << endl;
		}
		else {
			cout << abs(a1 - b1) + 1 << endl;
		}
	}


	return 0;
}