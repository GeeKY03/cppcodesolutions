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
	vector<pair<int, int>> vp;
	int start = 0, count = 1;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			count++;
			if (count == 2) {
				vp.push_back({start, start + count - 1});
				start = i;
				count = 1;
			}
			if ((i == n - 1) && (count >= 2)) {
				vp.push_back({start, start + count - 1});
			}
		}
		else {
			if (count == 2) {
				vp.push_back({start, start + count - 1});
				start = i;
				count = 1;
			}
			else {
				start = i;
				count = 1;
			}
		}
	}
	int res = 0;
	int sz = vp.size();
	if (sz == 0) {
		res = n - 1;
	}
	else {
		for (int i = 0; i < sz; i++) {
			if (i == 0) {
				if (sz > 1) {
					res = max(res, vp[i + 1].first);
				}
				else {
					res = max(res, vp[i].second);
				}
			}
			else if (i == n - 1) {
				if (sz > 1) {
					res = max(res, n - 1 - vp[n - 2].second);
				}
			}
			else {
				res = max(res, vp[i + 1].first - vp[i - 1].second);
			}
		}
	}
	cout << res + 1 << endl;
	for (auto x : vp) {
		cout << x.ff << " " << x.ss << endl;
	}


	return 0;
}