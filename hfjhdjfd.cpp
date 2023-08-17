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
	vi v = {1, 2, 3, 4};
	ll temp = 0;

	for (int i = 0; i < 100; i++) {
		next_permutation(v.begin(), v.end());

		ll mx = 0;
		ll res = 0;
		for (int i = 0; i < 4; i++) {
			ll n = v[i] * (i + 1);
			mx = max(mx, n);
			res += n;
		}
		temp = max(temp, res - mx);
		if (res - mx == 17) {
			for (auto x : v) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
	// cout << temp << endl;



	return 0;
}