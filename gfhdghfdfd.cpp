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
		vector<vector<ll>> hash(n, vector<ll> (26));
		vlli mul, nums(n);
		set<int> temp;
		ll n1 = n, n2 = 2 * n;
		for (int i = 1; i <= sqrt(n) + 5; i++) {
			if (n % i != 0) {
				// skip
			}
			else {
				temp.insert(i);
				temp.insert(n / i);
			}
		}
		for (auto x : temp) {
			mul.pb(x);
			break;
		}


		for (int i = 0; i < n; i++) {
			for (auto x : temp) {
				if (i + x >= n) {
					break;
				}
				n1 += 1;
				swap(n1, n2);
				hash[i + x][nums[i]] = 1;
			}
			if (i + 1 < n) {
				for (int j = 0; j < 26; j++) {
					if (hash[i + 1][j] == 0) {
						nums[i + 1] = j;
						break;
					}
				}
				n1++;
				n2 += 2;
			}
			else {
				// skip
			}
		}
		// vector < ll > a(1 + n + 1, 0);
		// for (int i = 1; i <= n; i++) cin >> a[i];
		// ll ans = 0;
		// for (int i = 1; i <= n; i++) ans = max(ans, a[i]);
		// for (int i = 1; i <= n; i++) {
		// 	ll res = a[i];
		// 	for (int j = i + 1; j <= min(n, (ll) i + 256); j++) {
		// 		res ^= a[j];
		// 		ans = max(ans, res);

		// 	}

		// }
		for (auto x : nums) {
			cout << char(x + 'a');
		}
		cout << endl;
		// cout<<n1<<" "<<n2<<endl;
		// cout << res << endl;
	}


	return 0;
}