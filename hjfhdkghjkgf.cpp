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
		string a, b;
		cin >> a >> b;
		int diff = a.size() - b.size();
		if (diff < 0) {diff *= -1;};

		string smol, lrg;
		for (int i = 0; i < diff; i++) {
			smol.pb('0');
		}
		if (a.size() > b.size()) {
			smol += b;
			lrg = a;
		}
		else {
			smol += a;
			lrg = b;
		}
		// cout << smol << " " << lrg << endl;

		ll res = 0;
		int ind = 0;
		while (smol[ind] == lrg[ind]) {
			ind++;
		}
		res += abs(smol[ind] - lrg[ind]);
		for (int i = ind + 1; i < smol.size(); i++) {
			res += 9;
		}
		if (smol == lrg) {
			cout << 0 << endl;
		}
		else {
			cout << res << endl;
		}
	}


	return 0;
}