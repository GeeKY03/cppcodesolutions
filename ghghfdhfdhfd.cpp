#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


ll chkfloor(vector<vector<int>> &v, ll m, ll floor, ll cpos) {
	ll ind = -1;
	if (cpos == 0) {
		for (int i = 1; i < m + 1; i++) {
			if (v[floor][i] == 1) {
				ind = i;
			}
		}
	}
	else {
		for (int i = m + 1; i >= 1; i--) {
			if (v[floor][i] == 1) {
				ind = i;
			}
		}
	}
	return ind;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, (vector<int> (m + 2, 0)));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m + 2; j++) {
			char x;
			cin >> x;
			v[i][j] = x - 48;
		}
	}
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m + 2; j++) {
	// 		cout << v[i][j];
	// 	}
	// 	cout << endl;
	// }
	ll num = (1 << (n));
	set<ll> sett;
	for (int k = 0; k < num; k++) {
		ll temp = k;
		string s;
		for (int j = 0; j < n; j++) {
			if (temp & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			temp >>= 1;
		}
		set<ll> sett;
		// cout << s << endl;
		ll ctr = 0;
		ll cpos = 0;
		for (int i = 0; i < n; i++) {
			ll pos = s[n - i - 1] - 48;
			if (pos == 0) {
				if (cpos == m + 1) {
					ctr++;
					cpos = 0;
				}
				else {
					ctr += cpos;
					cpos = 0;
				}
			}
			else {
				if (cpos == 0) {
					ctr++;
					cpos = m + 1;
				}
				else {
					ctr += m + 1 - cpos;
					cpos = m + 1;
				}
			}
			ll light = chkfloor(v, m, i, cpos);
			if (light == -1) {
				ctr += 0;
			}
			else {
				if (cpos == 0) {
					ctr += light;
				}
				else {
					ctr += m + 1 - light;
				}
				cpos = light;
			}
		}
		sett.insert(ctr);
	}
	cout << "hi" << endl;
	for (auto x : sett) {
		cout << x << endl;
	}




	return 0;
}