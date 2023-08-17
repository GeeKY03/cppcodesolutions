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

bool isPalindrome(string s, int n) {
	int sz = n / 2;
	for (int i = 0; i <= sz; i++) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	string s, res = "";
	int sz = 0;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		string temp = "";
		for (int j = i; j < n; j++) {
			temp += s[j];
			// cout << temp << " ";
			if (isPalindrome(temp, j - i + 1)) {
				if (sz < (j - i + 1)) {
					sz = j - i + 1;
					res = temp;
				}
			}
		}
	}
	cout << res << endl;


	return 0;
}