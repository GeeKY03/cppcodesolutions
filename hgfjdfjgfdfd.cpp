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
		vlli a, b;
		ll mxa = 0, mxb = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mxa = max(mxa, x);
			a.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			mxb = (mxb, x);
			b.pb(x);
		}
		bool chk = true;
		if ((mxa != a[n - 1]) && (mxb != b[n - 1])) {
			chk = false;
		}
		else if (a[n - 1] == mxa) {
			for (int i = 0; i < n - 1; i++) {
				if ((b[i] > b[n - 1]) && (b[i] <= mxa)) {
					swap(a[i], b[i]);
				}
			}
		}
		else if (b[n - 1] == mxb) {
			for (int i = 0; i < n - 1; i++) {
				if ((a[i] > a[n - 1]) && (a[i] <= mxb)) {
					swap(a[i], b[i]);
				}
			}
		}
		mxa = 0, mxb = 0;
		for (int i = 0; i < n; i++) {
			mxa = max(mxa, a[i]);
		}
		for (int i = 0; i < n; i++) {
			mxb = max(mxb, b[i]);
		}
		if (chk == false) {
			cout << "NO" << endl;
		}
		else if ((a[n - 1] == mxa) && (mxb == b[n - 1])) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}