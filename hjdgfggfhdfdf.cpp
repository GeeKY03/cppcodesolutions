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
		string s;
		cin >> s;
		// case 1
		// we want t-1 to win
		ll s1 = 0, s2 = 0;
		ll ans1 = 10;
		for (int i = 1; i <= 10; i++) {
			if (i & 1) {
				if ((s2 + ((10 - i + 1) / 2)) < s1) {
					ans1 = i - 1;
					break;
				}
			}
			else {
				if ((s2 + 1 + (10 - i) / 2) < s1) {
					ans1 = i - 1;
					break;
				}
			}
			if (i & 1) {
				if (s[i - 1] == '1') {
					s1++;
				}
				else if (s[i - 1] == '?') {
					s1++;
				}
			}
			else {
				if (s[i - 1] == '1') {
					s2++;
				}
			}

		}

		// case2
		// we want t-2 to win
		ll s3 = 0, s4 = 0;
		ll ans2 = 10;
		for (int i = 1; i <= 10; i++) {

			if (i & 1) {
				if ((s3 + 1 + ((10 - i) / 2)) < s4) {
					ans2 = i - 1;
					break;
				}
			}
			else {
				if ((s3 + (10 - i) / 2) < s4) {
					ans2 = i - 1;
					break;
				}
			}

			if (i & 1) {
				if (s[i - 1] == '1') {
					s3++;
				}
			}
			else {
				if (s[i - 1] == '?') {
					s4++;
				}
				else if (s[i - 1] == '1') {
					s4++;
				}
			}
		}
		cout << min(ans1, ans2) << endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}