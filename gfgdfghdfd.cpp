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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		int open = 0, close = 0;
		stack<pair<char, int>> st1, st2;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				open++;
				st1.push({'(', i});
			}
			else {
				close++;
				if (st1.empty()) {
					st1.push({')', i});
				}
				else {
					if (st1.top().ff == '(') {
						st1.pop();
					}
					else {
						st1.push({')', i});
					}
				}
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '(') {
				open++;
				st2.push({'(', i});
			}
			else {
				close++;
				if (st2.empty()) {
					st2.push({')', i});
				}
				else {
					if (st2.top().ff == '(') {
						st2.pop();
					}
					else {
						st2.push({')', i});
					}
				}
			}
		}
		if (open != close) {
			cout << -1 << endl;
		}
		else if ((st1.size() == 0) || (st2.size() == 0)) {
			cout << 1 << endl;
			for (int i = 0; i < n; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else {
			vector<int> v(n, 1);
			while (!st1.empty()) {
				v[st1.top().ss] = 2;
				st1.pop();
			}
			cout << 2 << endl;
			for (auto x : v) {
				cout << x << " ";
			}
			cout << endl;
		}
	}


	return 0;
}