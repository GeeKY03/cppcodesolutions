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
		ll div = 0;
		ll res = 0;
		if (set2.size() == n) {
			cout << n << endl;
		}
		else {
			for (int i = 1; i < n; i++) {
				ll temp = i;
				ll num = 1;
				if (set2.size() == 0) {
					break;
				}
				while (temp * num <= n) {
					ll temp2 = temp * num;
					if (set2.find(temp2) != set2.end()) {
						set2.erase(set2.find(temp2));
						res += temp;
					}

					num++;
				}
			}
			cout << res << endl;
		}

	}


	return 0;
}