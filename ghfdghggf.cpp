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

// int findMaxLastElement(vector<int>& arr) {
// 	int n = arr.size();
// 	if (n <= 2) {
// 		return max(arr[0], arr[n - 1]);
// 	}

// 	int prev = max(arr[0], arr[1]);
// 	int current = max(prev, arr[2]);

// 	for (int i = 3; i < n; i++) {
// 		int temp = current;
// 		current = max(prev + arr[i], current);
// 		prev = temp;
// 	}

// 	return current;
// }

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
		vlli v;
		ll res = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		// if (n <= 2) {
// 		return max(arr[0], arr[n - 1]);
// 	}
		ll prev = 0, curr = 0;
		int ind = 0;
		for (auto x : v) {
			if (ind % 2 == 0) {
				curr += max(0LL, v[ind]);
			}
			else {
				prev += max(0LL, v[ind]);
			}
			ind++;
		}
		sort(all(v));
		// 	for (int i = 3; i < n; i++) {
		// 		int temp = current;
		// 		current = max(prev + arr[i], current);
		// 		prev = temp;
		// 	}
		res = max(prev, curr);

		if (res != 0) {
			cout << res << endl;
		}
		else {
			cout << v[n - 1] << endl;
		}

	}


	return 0;
}