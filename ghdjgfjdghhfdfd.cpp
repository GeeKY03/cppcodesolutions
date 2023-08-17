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
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (x == 0) {
			cout << 0 << endl;
		}
		else {
			ll res = 15;
			for (int i = 0; i <= 15; i++) {
				ll temp = x + i;
				ll ctr = 0;
				while ((temp % 2 == 0) && (temp != 0)) {
					ctr++;
					temp /= 2;
				}
				res = min(res, 15 - ctr + i);
			}
			cout << res << endl;
		}
	}


	return 0;
}