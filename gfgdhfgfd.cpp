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
	string s = to_string(n);
	map<int, int> mp;
	vector<pair<int, int>> vp;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i] - 48]++;
		vp.pb({i, s[i] - '0'});
	}
	bool chk = true;
	for (int i = 0; i < vp.size(); i++) {
		if (mp[vp[i].ff] != vp[i].second) {
			chk = false;
		}
	}
	cout << chk << endl;


	return 0;
}