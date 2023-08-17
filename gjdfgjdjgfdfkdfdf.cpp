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
		vi v;
		ll ctr = 0;
		for (int i = 0; i < n; i++) {
			v.pb(i + 1);
			if (s[i] == '0') {
				ctr++;
			}
		}
		ll res = 0;
		for (int i = 0; i < n; i++) {
			ll temp = i + 1;
			ll num = 1;
			while (temp * num <= n) {
				if (s[(temp * num) - 1] == '1') {
					break;
				}
				else if ((s[(temp * num) - 1] == '0') && (v[(temp * num) - 1] != -1)) {
					res += temp;
					v[temp * num - 1] = -1;
					ctr--;
					num++;
				}
				else if ((s[(temp * num) - 1] == '0') && (v[(temp * num) - 1] == -1)) {
					num++;
				}
			}
		}
		cout << res << endl;
	}


	return 0;
}