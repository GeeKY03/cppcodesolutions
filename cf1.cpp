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
		ll n;

		// Culprit number: number larger than previous one from going right to left

		vi v;
		cin >> n;
		// Taking inpput
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		int flag = 0;
		// to check if all elements are same,because then 0 moves are required
		for (int i = 1; i < n; i++) {
			if (v[i] < v[i - 1]) {
				flag = 1;
				break;
			}
		}
		// if array has only one element then no moves required
		if (n == 1) {
			cout << 0 << endl;
		}
		// to verify if the array is already non-decreasing
		else if (flag == 0) {
			cout << 0 << endl;
		}
		// general solution without edge cases
		else {
			ll ref = v[n - 1]; // reference number to compare preceding elements
			ll ind = 0; // to store index of the culprit element distorting the order
			// finding the first culprit element from last 
			for (int i = n - 1; i >= 0; i--) {
				if (v[i] > ref) {
					ind = i;
					break;
				}
				else if (v[i] == ref) {
					continue;
				}
				// if value is decresing from right ot left then reduce the ref number being used for comparison
				else if (v[i] < ref) {
					ref = v[i];
				}
			}
			// to check if there is any common element before and after the culprit number
			set<ll> sett;
			for (int i = ind; i >= 0; i--) {
				sett.insert(v[i]);
			}

			for (int i = n - 1; i >= ind + 1; i--) {
				if (sett.find(v[i]) != sett.end()) {
					ind = i - 1;
					break;
				}
			}
			// cout<<ind<<endl;
			set<ll> sett2;
			// storing all the unique elements 
			for (int i = 0; i <= ind; i++) {
				sett2.insert(v[i]);
			}
			cout << sett2.size() << endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}