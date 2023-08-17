#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, q;
		vi v1;
		cin >> n >> q;
		ll mxi = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v1.pb(x);
			if (x == n) {
				mxi = i;
			}
		}

		bool arr[mxi + 1][n] = {0};
		for (int j = 0; j < n; j++) {
			arr[0][j] = 0;
		}
		ll wi = 0;

		for (int i = 1; i <= mxi; i++) {
			vi round(n, 0);
			if (v1[wi] > v1[i]) {
				arr[i - 1][wi]++;
			}
			else {
				wi = i;
				arr[i - 1][wi]++;
			}
		}

		// show array
		// for(int i=0;i<=mxi;i++){
		// 	for(int j=0;j<n;j++){
		// 		cout<<arr[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		while (q--) {
			ll j, k;
			cin >> j >> k;
			if (k > mxi) {
				ll sum = 0;
				for (int i = 0; i <= mxi; i++) {
					sum += arr[i][j - 1];
				}
				if (mxi == j - 1) {
					sum += (k - mxi);
					cout << sum << endl;
				}
				else {
					cout << sum << endl;
				}
			}
			else {
				ll summ = 0;
				for (int i = 0; i < k; i++) {
					summ += arr[i][j - 1];
				}
				cout << summ << endl;
			}
		}


	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}