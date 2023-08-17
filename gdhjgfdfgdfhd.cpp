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
	int n;
	cin >> n;
	string s;
	cin >> s;
	vi P;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		P.pb(x);
	}
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[P[i]] = i;
	}
	for (auto x : mp) {
		cout << x.ff << "-> " << x.ss << endl;
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			int temp = min(mp[i], mp[i - 1]);
			res = max(res, temp + 1);
		}
	}
	cout << res << endl;




	return 0;
}