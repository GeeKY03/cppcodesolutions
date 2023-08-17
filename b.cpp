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
		ll s1 = 0, s2 = 0, s3 = 0;
		vector<string> v1, v2, v3;
		for (int i = 0; i < n; i++) {
			string x;
			cin >> x;
			v1.pb(x);
		}
		for (int i = 0; i < n; i++) {
			string x;
			cin >> x;
			v2.pb(x);
		}
		for (int i = 0; i < n; i++) {
			string x;
			cin >> x;
			v3.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll ctr = 1;
			for (int j = 0; j < n; j++) {
				if (v2[j] == v1[i]) {
					ctr ++;
				}
				if (v3[j] == v1[i]) {
					ctr++;
				}
			}
			if (ctr == 3) {
				continue;
			}
			else if (ctr == 2) {
				s1++;
			}
			else {
				s1 += 3;
			}
		}
		// for v2
		for (int i = 0; i < n; i++) {
			ll ctr = 1;
			for (int j = 0; j < n; j++) {
				if ((v1[j] == v2[i]) && (v3[j] == v2[i])) {
					ctr += 2;
				}
				else if ((v1[j] == v2[i]) || (v3[j] == v2[i])) {
					ctr++;
				}
			}
			if (ctr == 3) {
				continue;
			}
			else if (ctr == 2) {
				s2++;
			}
			else {
				s2 += 3;
			}
		}
		// for v3
		for (int i = 0; i < n; i++) {
			ll ctr = 1;
			for (int j = 0; j < n; j++) {
				if ((v2[j] == v3[i]) && (v1[j] == v3[i])) {
					ctr += 2;
				}
				else if ((v2[j] == v3[i]) || (v1[j] == v3[i])) {
					ctr++;
				}
			}
			if (ctr == 3) {
				continue;
			}
			else if (ctr == 2) {
				s3++;
			}
			else {
				s3 += 3;
			}
		}
		cout << s1 << " " << s2 << " " << s3 << endl;
	}


	return 0;
}