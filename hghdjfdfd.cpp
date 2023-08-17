#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		set<int> set1, set2;
		int ind = 0;
		vi v;
		for (int i = 1; i <= n; i++) {
			v.pb(i);
		}
		int flag = 0;
		ll k = 0;
		for (auto x : v) {
			if (s[ind] == '0') {
				set2.insert(x);
				if (flag == 0) {
					k = ind + 1;
					flag = 1;
				}
			}
			ind++;
		}
		ll temp = k;
		ll res = 0;
		for (int i = k; i <= n; i++) {
			if (s[i - 1] == '0') {
				if (v[i - 1] % temp != 0) {
					temp++;
				}
				ll num = 1;
				while (temp * num <= n) {
					if (set2.find(temp * num) != set2.end()) {
						res += i;
						set2.erase(set2.find(temp * num));
					}
					else {
						temp++;
						break;
					}
					num++;
				}
			}

		}
		cout << res << endl;
	}


	return 0;
}