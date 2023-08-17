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
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		ll times = n / k;
		ll res = 0;
		for (int i = 0; i < (k + 1) / 2; i++) {
			map<ll, ll> arr;
			for (int j = 0; j < times; j++) {
				arr[s[i + j * k] - 97]++;
				arr[s[(k * (j + 1)) - i - 1] - 97]++;
			}
			ll mx = 0;
			ll temp = 0;
			for (auto x : arr) {
				temp = max(temp, arr[x.ff]);
				// cout << x.ff << ": " << arr[x.ff] << endl;
			}
			if (k & 1) {
				if (i == ((k + 1) / 2) - 1) {
					res += (n / k) - temp / 2;
				}
				else {
					res += (((n / k) * 2) - temp);
				}

			}
			else {
				res += (((n / k) * 2) - temp);
			}


		}
		cout << res << endl;
	}


	return 0;
}