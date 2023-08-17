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
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		int val = v[0];
		bool found = false;
		bool flag = true;
		int ctr = 1;
		for (int i = 0; i < n; i++) {
			if (flag == true) {
				val = v[i];
				flag = false;
			}
			val = (val & v[i]);
			if ((val == 0) && (found == true)) {
				ctr++;
				flag = true;
			}
			else if (val == 0 && found == false) {
				found = true;
				flag = true;
			}
		}
		cout << ctr << endl;
	}


	return 0;
}