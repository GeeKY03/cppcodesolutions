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
	getline(cin, s);
	vector<char> v, temp;
	for (int i = 0; i < s.size(); i++) {
		v.pb(s[i]);
	}

	ll n;
	cin >> n;
	stack<vector<char>> st;
	for (int i = 0; i < n; i++) {
		string op;
		cin >> op;
		if (op == "PASTE") {
			if (!st.empty()) {
				temp = st.top();
				st.pop();
			}
			else {
				temp.clear();
			}
			ll i1;
			cin >> i1;
			v.insert(v.begin() + i1 - 1, temp.begin(), temp.end());
		}
		else {
			temp.clear();
			ll i1, i2;
			cin >> i1 >> i2;
			if (op == "COPY") {
				for (int i = i1 - 1; i < i2; i++) {
					temp.pb(v[i]);
				}
				st.push(temp);
			}
			else {
				for (int i = i1 - 1; i < i2; i++) {
					temp.pb(v[i]);
				}
				v.erase(v.begin() + i1 - 1, v.begin() + i2);
				st.push(temp);
			}
		}
	}
	for (auto x : v) {
		cout << x;
	}
	cout << endl;


	return 0;
}