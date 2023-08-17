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
	ll n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		v.pb(x);
	}
	map<char, ll> indegree;
	bool chk = true;
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			if (v[i][0] == v[i - 1][0]) {
				ll sz = min(v[i].size(), v[i - 1].size());
				for (int j = 0; j < sz; j++) {
					if (v[i][j] != v[i - 1][j]) {
						indegree[v[i][j]] = indegree[v[i - 1][j]] + 1;
					}
				}
			}
			else {
				if (indegree[v[i][0]] == indegree[v[i - 1][0]] + 1) {
					indegree[v[i][0]] = indegree[v[i - 1][0]] + 1;
				}
				else {
					chk = false;
				}
			}
		}
		else {
			indegree[v[i][0]]++;
		}
	}
	vector<ll> res;
	if (chk == false) {
		cout << "Impossible" << endl;
	}
	else {
		vector<ll> left(26, 0);
		vector<pair<ll, char>> res;
		for (auto x : indegree) {
			res.pb({indegree[x.ff], x.ff});
			left[x.ff - 97] = indegree[x.ff];
		}
		sort(all(res));
		for (auto x : res) {
			cout << x.ss << "";
		}
		for (int i = 0; i < 26; i++) {
			if (left[i] == 0) {
				cout << char(97 + i) << "";
			}
		}
		cout << endl;
	}


	return 0;
}