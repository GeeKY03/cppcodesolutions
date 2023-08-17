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
		int n = s.length();
		if (n & 1) {
			cout << "NO" << endl;
		}
		else {
			ll b = 0, q = 0;
			for (int i = 0; i < n; i++) {
				if (s[i] == '(') {
					b++;
				}
				else if (s[i] == ')') {
					b--;
				}
				if (s[i] == '?') {
					q++;
				}
				if (b + q == 1) {
					q = 0;
					b = 1;
				}
			}
			if (q == b) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}