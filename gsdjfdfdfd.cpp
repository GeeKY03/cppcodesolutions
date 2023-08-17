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
		vector<int> arr[n];
		for (int i = 0; i < n; i++) {
			int q;
			cin >> q;
			arr[i].pb(q);
			for (int j = 0; j < q; j++) {
				int x;
				cin >> x;
				arr[i].pb(x);
			}
		}
		int flag = 0;
		// for (int i = 0; i < n; i++) {
		// 	ll k = arr[i].size();
		// 	for (int j = 0; j < k; j++) {
		// 		cout << arr[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		for (int i = 0; i < n - 1; i++) {
			ll k = arr[i].size();
			for (int j = i + 1; j < n; j++) {
				set<int> sett;
				for (int p = 1; p < k; p++) {
					sett.insert(arr[i][p]);
				}
				ll m = arr[j].size();
				for (int u = 1; u < m; u++) {
					sett.insert(arr[j][u]);
				}


				// for (auto x : sett) {
				// 	cout << x << " ";
				// }
				ll ctr = 0;
				for (int f = 1; f <= 5; f++) {
					if (sett.find(f) == sett.end()) {
						break;
					}
					if (f == 5) {
						flag = 1;
					}
				}

			}
		}
		if (flag == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}