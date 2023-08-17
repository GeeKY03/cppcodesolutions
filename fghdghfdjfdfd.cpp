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
		string s;
		cin >> s;
		ll n = s.size();
		queue<int> q;
		ll w = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'W') {
				w++;
			}
			else {
				q.push(i);
			}
		}
		if (w == 0) {
			cout << -1 << endl;
		}
		else if (w == n) {
			cout << 0 << endl;
		}
		else {
			ll res = 0;
			while (!q.empty()) {
				ll i = q.front();
				q.pop();
				if (i == 0) {
					if (s[i + 1] == 'W') {
						res++;
						s[i] = 'W';
					}
					else {
						q.push(i);
					}
				}
				else if (i == n - 1) {
					if (s[i - 1] == 'W') {
						res += 2;
						s[i] = 'W';
					}
					else {
						q.push(i);
					}
				}
				else {
					if (s[i + 1] == 'W') {
						res++;
						s[i] = 'W';
					}
					else if (s[i - 1] == 'W') {
						res += 2;
						s[i] = 'W';
					}
					else {
						q.push(i);
					}
				}
			}
			cout << res << endl;
		}
	}


	return 0;
}