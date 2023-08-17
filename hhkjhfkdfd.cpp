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
		cin >> s1 >> s2;
		ll dif = 0, same = 0;
		ll one1 = 0, one2 = 0;
		for (int i = 0; i < n; i++) {
			if (s1[i] == '1') {
				one1++;
			}
			if (s2[i] == '1') {
				one2++;
			}
			if (s1[i] != s2[i]) {
				dif++;
			}
			else {
				same++;
			}
		}
		if ((same != n) && (dif != n)) {
			cout << "NO" << endl;
		}
		else if ((one1 == 0) && (one2 == 0)) {
			cout << "YES" << endl;
			cout << 0 << endl;
		}
		else if ((one1 == n) && (one2 == n)) {
			cout << "YES" << endl;
			cout << 2 << endl;
			cout << 1 << " " << 1 << endl;
			cout << 2 << " " << n << endl;
		}
		else if ((one1 == n) && (one2 == 0)) {
			cout << "YES" << endl;
			cout << 1 << endl;
			cout << 1 << " " << n << endl;
		}
		else if ((one1 == 0) && (one2 == n)) {
			cout << "YES" << endl;
			cout << 3 << endl;
			cout << 1 << " " << n << endl;
			cout << 1 << " " << 1 << endl;
			cout << 2 << " " << n << endl;
		}
		else {
			vector<pair<int, int>> vp;
			ll ptr1 = 0, ptr2 = n - 1;
			for (int i = 0; i < n; i++) {
				if (s1[i] == '0') {
					ptr1 = i;
					break;
				}
			}
			// for (int i = ptr1; i < n; i++) {
			// 	if (s1[i] == '1') {
			// 		ptr1 = i - 1;
			// 		break;
			// 	}
			// }
			for (int i = n - 1; i >= 0; i--) {
				if (s1[i] == '0') {
					ptr2 = i;
					break;
				}
			}
			// for (int i = ptr2; i >= 0; i--) {
			// 	if (s1[i] == '1') {
			// 		ptr2 = i + 1;
			// 		break;
			// 	}
			// }
			// cout << ptr1 << " " << ptr2 << endl;
			if (ptr1 <= ptr2) {
				vp.pb({ptr1, ptr2});
			}
			while (ptr1 < ptr2) {
				while (s1[ptr1] == s1[ptr2]) {
					ptr1++;
				}
				while (s1[ptr2] != s1[ptr1]) {
					ptr2--;
				}
				if (ptr1 <= ptr2) {
					vp.pb({ptr1, ptr2});
				}
			}
			vp.pb({0, n - 1});
			cout << "YES" << endl;
			cout << vp.size() << endl;
			for (auto x : vp) {
				cout << x.first + 1 << " " << x.second + 1 << endl;
			}
		}
	}


	return 0;
}