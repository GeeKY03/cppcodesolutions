#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		// for (int i = 0; i < n; i++) {
		// 	arr[s[i] - 48]++;
		// 	sett.insert(s[i] - 48);
		// 	if (arr[s[i] - 48] > sett.size()) {
		// 		sett.clear();
		// 		sett.insert(s[i] - 48);
		// 		num.pb(ctr);
		// 		ctr = 1;
		// 		for (int i = 0; i < 10; i++) {
		// 			arr[i] = 0;
		// 		}
		// 	}
		// 	else {
		// 		ctr++;
		// 		if (i == n - 1) {
		// 			num.pb(ctr);
		// 		}
		// 	}
		// }
		ll res = 0;
		for (ll i = 0; i < n; i++) {
			ll arr[10] = {0};
			ll distinct = 0;
			vi num;
			ll ctr = 0;
			set<ll> sett;
			for (int j = i; j < min(n, i + 228); j++) {
				if (arr[s[j] - 48] == 0) {
					distinct++;
				}
				arr[s[j] - 48]++;
				ll mx = 0;
				for (int i = 0; i < 10; i++) {
					mx = max(mx, arr[i]);
				}
				// for(auto x:arr){
				// 	cout<<x<<" ";
				// }
				// cout<<endl;
				if (distinct >= mx) {
					res++;
				}
			}

		}
		cout << res << endl;
		// for (auto x : num) {
		// 	cout << x << " ";
		// }

	}


	return 0;
}