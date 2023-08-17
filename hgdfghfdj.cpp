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
	ll n = s.size();
	map<char, ll> mp;
	vector<pair<ll, char>> dq;
	for (int i = 0; i < n; i++) {
		mp[s[i]]++;
		dq.pb({i, s[i]});
	}
	// for (auto x : mp) {
	// 	cout << x.ff << ": ";
	// 	cout << mp[x.ff] << endl;
	// }
	ll ctr = 0;
	// for (auto x : dq) {
	// 	cout << x.ff << ": " << x.ss << endl;
	// }
	while (!dq.empty()) {
		if (ctr & 1) {
			pair<ll, char> p = dq.back();
			dq.erase(dq.end() - 1);
			if (mp[p.ss] >= 2) {
				mp[p.ss]--;
				s[p.ff] = '.';
				ctr++;
			}
		}
		else {
			pair<ll, char> p = dq.front();
			dq.erase(dq.begin());
			if (mp[p.ss] >= 2) {
				mp[p.ss]--;
				s[p.ff] = '.';
				ctr++;
			}
		}
	}
	if (ctr & 1) {
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] != '.') {
				cout << s[i] << "";
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (s[i] != '.') {
				cout << s[i];
			}
		}
	}



	return 0;
}