#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll chkfloor(vector<vector<int>> v, ll floor, ll pos, ll m) {
	ll ind = -1;
	if (pos == 0) {
		for (int i = 1; i <= m; i++) {
			if (v[floor][i] == 1) {
				ind = i;
			}
		}
	}
	else {
		for (int i = m; i >= 1; i--) {
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
	vector<vector<int>> v(n, vector<int> (m + 2, 0));
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
	ll num = (1 << (n - 1));
	set<ll> sett;
	for (int i = 0; i < num; i++) {
		ll temp = i;
		string s = "0";
		ll pos = 0;  // 0-> Left    1-> Right
		for (int i = 0; i < n - 1; i++) {
			if (temp & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			temp >>= 1;
		}
		ll cpos = 0;
		ll ctr = 0;
		cout << s << endl;
		for (int i = n - 1; i >= 0; i--) {
			ll floor = i;
			ll LightOn = chkfloor(v, floor, cpos, m);
			if (LightOn == -1) {
				// cout << "No" << endl;
			}
			else {
				cout << "Light :" << LightOn << endl;
				if (cpos == 0) {
					ctr += LightOn;
					cpos = LightOn;
				}
				else {
					ctr += m - LightOn + 1;
					cpos = LightOn;
				}
			}
			ll pos = s[n - i - 1] - 48;
			if (pos == 1) {
				ctr += m - cpos + 1;
				cpos = m + 1;
			}
			else {
				ctr += LightOn;
				cpos = 0;
			}

			ctr++; // To climb upstairs
			cout << ctr << endl;
		}
		sett.insert(ctr);
	}
	for (auto x : sett) {
		cout << x << endl;
		break;
	}


	return 0;
}