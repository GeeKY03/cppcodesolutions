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
		vi v;
		string s;
		cin >> s;
		bool chk = true;
		for (int i = 1; i < n; i++) {
			if (s[i] < s[i - 1]) {
				chk = false;
			}
		}
		if (chk) {
			cout << 0 << endl;
		}
		else {
			ll fo = 0;
			int flag = 0;
			for (int i = 0; i < n; i++) {
				if (s[i] == '1') {
					fo = i;
					for (int j = i + 1; j < n; j++) {
						if (s[j] == '0') {
							fo = j;
							flag = 1;
							break;
						}
					}
				}
				if (flag) {
					break;
				}
			}
			ll ans = 0;
			for (int i = fo; i < n; i++) {
				if (s[i] != s[i - 1]) {
					ans++;
				}
			}
			cout << ans << endl;
		}



	}


	return 0;
}