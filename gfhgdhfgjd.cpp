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
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 2; i < n; i++) {
		if (s[i] == '?' && s[i - 2] == s[i - 1] && s[i - 1] != '?') {
			if (s[i - 1] == 'a') {
				s[i] = 'b';
			}
			else {
				s[i] = 'a';
			}
		}
	}
	for (int i = n - 3; i >= 0; i--) {
		if (s[i] == '?' && s[i + 1] == s[i + 2] && s[i + 1] != '?') {
			if (s[i + 1] == 'a') {
				s[i] = 'b';
			}
			else {
				s[i] = 'a';
			}
		}
	}
	for (int i = 0; i < n - 2; i++) {
		if (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] != '?') {
			cout << -1 << "\n";
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '?') {
			if (i > 1 && s[i - 1] == s[i - 2]) {
				if (s[i - 1] == 'a') {
					s[i] = 'b';
				}
				else {
					s[i] = 'a';
				}
			}
			else if (i > 0 && s[i - 1] == s[i + 1]) {
				if (s[i - 1] == 'a') {
					s[i] = 'b';
				}
				else {
					s[i] = 'a';
				}
			}
			else {
				s[i] = 'a';
			}
		}
	}
	cout << s << endl;

	return 0;
}