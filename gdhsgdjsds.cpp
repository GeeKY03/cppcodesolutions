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
		vlli res(n, 0), v1, v2;
		char v3[n];
		// ll dif = 0, same = 0;
		// ll one1 = 0, one2 = 0;
		// for (int i = 0; i < n; i++) {
		// 	if (s1[i] == '1') {
		// 		one1++;
		// 	}
		// 	if (s2[i] == '1') {
		// 		one2++;
		// 	}
		// 	if (s1[i] != s2[i]) {
		// 		dif++;
		// 	}
		// 	else {
		// 		same++;
		// 	}
		// }
		for (int i = 0; i < n; i++) {
			ll x = i;
			while ((s1[i] == '1') && (i <= n - 1))
				i++;
			if (x != i) {
				v1.pb(x + 1);
				v2.pb(i);
				res[0]++;
				res[x]--;
				res[i]++;
			}

		}
		// cout << "HI" << endl;
		ll ptr = 0, fres = 0;
		for (int i = 0; i < n; i++) {
			fres += res[i];
			if (((s2[i] == '0') && (fres % 2 == 1)) || ((s2[i] == '1') && (fres % 2 == 0))) {
				v3[i] = '1';
			}
			else {
				v3[i] = '1';
			}
		}
		for (int i = 1; i < n; i++) {
			if (v3[i] != v3[i - 1]) {
				ptr = 1;
			}
		}
		cout << ptr << endl;
		if (ptr == 0) {
			cout << "YES" << endl;
			if (v3[0] == '1') {
				v1.pb(1);
				v2.pb(n);
				v1.pb(1);
				v2.pb(1);
				v1.pb(2);
				v2.pb(n);
			}
			cout << v1.size() << endl;
			for (int i = 0; i < v1.size(); i++) {
				cout << v1[i] << " " << v2[i] << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}