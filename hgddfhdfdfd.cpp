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
		ll n, k, b, s;
		cin >> n >> k >> b >> s;
		ll check = s / k;
		ll check1 = (n - 1) * (k - 1) + ((k * (b + 1)) - 1);
		if (check < b) {
			cout << -1 << endl;
		}
		else if (check == b) {
			cout << s << " ";
			for (int i = 0; i < n - 1; i++) {
				cout << 0 << " ";
			}
			cout << endl;
		}
		else if (check1 < s) {
			cout << -1 << endl;
		}
		else {
			ll num = (k * (b + 1)) - 1;
			ll res = (s - num) % (k - 1);
			ll ctr = (s - num) / (k - 1);
			ll check2 = ctr;
			if (check2 > n - 1) {
				cout << -1 << endl;
			}
			else {
				cout << num << " ";
				for (int i = 0; i < ctr; i++) {
					cout << k - 1 << " ";
				}
				if (res > 0) {
					cout << res << " ";
					for (int i = 0; i < n - 1 - check2 - 1 ; i++) {
						cout << 0 << " ";
					}
				}
				else {
					for (int i = 0; i < n - 1 - check2; i++) {
						cout << 0 << " ";
					}
				}
				cout << endl;
			}

		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}