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
	ll t = 1;
	while (t--) {
		ll n;
		cin >> n;
		queue<int> q1, q2;
		ll k1, k2;
		cin >> k1;
		for (int i = 0; i < k1; i++) {
			ll x;
			cin >> x;
			q1.push(x);
		}
		cin >> k2;
		for (int i = 0; i < k2; i++) {
			ll x;
			cin >> x;
			q2.push(x);
		}
		ll ctr = 0;
		ll res = 0;
		while (true) {
			ll x = q1.front(), y = q2.front();
			q1.pop(); q2.pop();
			if (x > y) {
				q1.push(y);
				q1.push(x);
				k1++;
				k2--;
			}
			else {
				q2.push(x);
				q2.push(y);
				k1--;
				k2++;
			}
			ctr++;
			if (k1 == 0) {
				res = 2;
				break;
			}
			if (k2 == 0) {
				res = 1;
				break;
			}
			if (ctr == 100000) {
				break;
			}
		}
		if (res == 0) {
			cout << -1 << endl;
		}
		else {
			cout << ctr << " " << res << endl;
		}
	}


	return 0;
}