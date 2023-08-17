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
		vector<int> v, hash;
		cin >> n;
		vector<priority_queue<pair<int, int>>> res(n);
		int arr[n], temp[n + 1] = {0};
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			arr[i] = x;
			arr[i + 1] = x;
		}
		for (int i = 0; i < n + 1; i++) {
			hash.pb(0);
		}
		for (int i = 0; i < n; i++) {
			v.pb(arr[i] - 1);
		}
		// for (int i = 0; i < n; i++) {
		// 	v[i] -= 1;
		// }
		// for(int i=0;i<n;i++){
		// }
		for (int i = 0; i < n; i++) {
			arr[i + 1] = arr[i] - 1;
			hash[i + 1] = hash[i];
			arr[i] -= 1;
			if (res.empty() == 1) {
				// ignore
			}
			else if (!res[v[i]].empty()) {
				// 	int num = res[v[i]].top().second;
				// cout<<res[v[i]].top().first<<endl;
				int num = res[v[i]].top().second;
				// 	int num = res[v[i]].top().second;
				// 	hash[i] = max(hash[i - 1], hash[num] + i - num);
				hash[i + 1] = max(hash[i + 1], hash[num] + i - num + 1);
			}
			// else{
			// 	int num = res[v[i]].top().second;
			// 	hash[i] = max(hash[i - 1], hash[num] + i - num);
			// }
			res[v[i]].push({hash[i] - i, i});
			arr[i] = 0;
		}
		int ans = hash[n];
		cout << ans << endl;
	}


	return 0;
}