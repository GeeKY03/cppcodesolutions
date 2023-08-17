#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<string> str, res;
		string fres;
		for (int i = 0; i < 2 * (n - 1); i++) {
			string x;
			cin >> x;
			str.pb(x);
		}
		for (int i = 0; i < 2 * (n - 1); i++) {
			if (str[i].size() == n - 1) {
				res.push_back(str[i]);
			}
		}
		if (res[0].substr(1) != res[1].substr(0, n - 2)) {
			swap(res[0], res[1]);
		}
		fres = res[0] + res[1][n - 2];
		string comp;
		for (int i = n - 1; i >= 0; i--) {
			comp += fres[i];
		}

		// cout << fres << " " << comp << endl;

		if (fres == comp) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}