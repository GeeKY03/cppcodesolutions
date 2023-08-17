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
		string s1, s2;
		cin >> s1 >> s2;
		int n1 = s1.size();
		int n2 = s2.size();
		char c1, c2;
		for (int i = 0; i < n1; i++) {
			if (s1[i] != 'X') {
				c1 = s1[i];
				break;
			}
		}

		for (int i = 0; i < n2; i++) {
			if (s2[i] != 'X') {
				c2 = s2[i];
				break;
			}
		}
		// cout << c1 << " " << c2 << endl;
		if (c1 == c2) {
			if (c1 == 'S') {
				if (n1 > n2) {
					cout << '<' << endl;
				}
				else if (n1 < n2) {
					cout << '>' << endl;
				}
				else {
					cout << "=" << endl;
				}
			}
			else if (c1 == 'M') {
				cout << '=' << endl;
			}
			else if (c1 == 'L') {
				if (n1 > n2) {
					cout << '>' << endl;
				}
				else if (n2 > n1) {
					cout << '<' << endl;
				}
				else {
					cout << '=' << endl;
				}
			}
		}
		else {
			if (c1 > c2) {
				cout << '<' << endl;
			}
			else if (c1 < c2) {
				cout << '>' << endl;
			}
		}

	}


	return 0;
}