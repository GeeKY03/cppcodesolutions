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
	int res = 0;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		string temp;
		temp += s[i];
		int count = 0;
		for (int j = i + 1; j < n; j++) {
			if (s[j] == s[j - 1] && count < 1) {
				temp += s[j];
				count++;
			}
			else if (s[j] == s[j - 1] && count == 1) {
				break;
			}
			else {
				temp += s[j];
			}
			int sz = temp.size();
			res = max(res, sz);
		}
	}


	return 0;
}