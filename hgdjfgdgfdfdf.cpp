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
		string s;
		cin >> s;
		int n = s.size();
		string a = "(", b = "(";
		for (int i = 1; i < n; i++) {
			if (s[i] == s[0]) {
				a.pb('(');
			}
			else {
				a.pb(s[i]);
			}
		}
		string a1 = a, a2 = a;
		char ref = '.';
		for (int i = 0; i < n; i++) {
			if (a1[i] != '(') {
				if (ref == '.') {
					ref = a1[i];
					a1[i] = '(';
				}
				else {
					if (a1[i] == ref) {
						a1[i] = '(';
					}
					else {
						a1[i] = ')';
					}
				}
			}
		}
		char ref2 = '.';
		for (int i = 0; i < n; i++) {
			if (a2[i] != '(') {
				if (ref2 == '.') {
					ref2 = a2[i];
					a2[i] = ')';
				}
				else {
					if (a2[i] == ref2) {
						a2[i] = ')';
					}
					else {
						a2[i] = '(';
					}
				}
			}
		}
		string a3 = a;
		char ref3 = '.';
		for (int i = 0; i < n; i++) {
			if (a3[i] != '(') {
				if (ref3 == '.') {
					ref3 = a3[i];
					a3[i] = ')';
				}
				else {
					if (a3[i] == ref3) {
						a3[i] = ')';
					}
					else {
						a3[i] = ')';
					}
				}
			}
		}
		// cout << a << endl;
		// cout << a1 << endl;
		// cout << a2 << endl;
		// cout << a3 << endl;
		int ctr = 0;
		stack<char> s1, s2, s3;
		int f1 = 0, f2 = 0, f3 = 0;
		for (int i = 0; i < n; i++) {
			if (a1[i] == '(') {
				s1.push('(');
			}
			else {
				if (s1.empty()) {
					ctr++;
					f1 = 1;
					break;
				}
				else {
					s1.pop();
				}
			}
		}
		if (!(s1.empty())) {
			if (f1 != 1) {
				ctr++;
			}
		}

		for (int i = 0; i < n; i++) {
			if (a2[i] == '(') {
				s2.push('(');
			}
			else {
				if (s2.empty()) {
					ctr++;
					f2 = 1;
					break;
				}
				else {
					s2.pop();
				}
			}
		}
		if (!(s2.empty())) {
			if (f2 != 1) {
				ctr++;
			}
		}

		for (int i = 0; i < n; i++) {
			if (a3[i] == '(') {
				s3.push('(');
			}
			else {
				if (s3.empty()) {
					ctr++;
					f3 = 1;
					break;
				}
				else {
					s3.pop();
				}
			}
		}
		if (!(s3.empty())) {
			if (f3 != 1) {
				ctr++;
			}
		}



		// cout << ctr << endl;
		if (ctr < 3) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}