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
	string s = "   hello   world   ";
	int n = s.size();
	vector<string> v;
	string temp, res;
	int st = 0, end = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != ' ') {
			st = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] != ' ') {
			end = i;
			break;
		}
	}
	for (int i = st; i <= end; i++) {
		if (s[i] != ' ') {
			temp += s[i];
			if (i == n - 1) {
				v.pb(temp);
			}
		}
		else {
			if (temp != "") {
				v.pb(temp);
			}
			if (i != n - 1) {
				if (s[i + 1] != ' ') {
					v.pb(" ");
				}
			}
			temp = "";

		}
	}
	for (auto x : v) {
		cout << x;
	}

	return 0;
}