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
		string s1, s2;
		cin >> s1 >> s2;
		// ll num = (1 << 6) - 1;
		ll res = 0;
		for (int i = 0; i < n; i++) {
			set<char> sett;
			sett.insert(s1[i]);
			sett.insert(s2[i]);
			if (sett.size() == 2) {
				s1[i] = '-';
				s2[i] = '-';
				res += 2;
			}
		}
		// cout << s1 << endl;
		// cout << s2 << endl;
		// cout << res << endl;
		ll one = 0;
		for (int i = 0; i < n; i++) {
			if (s1[i] == '-') {
				one = 0;
			}
			else if (s1[i] == '1') {
				one++;
			}
			else if (s1[i] == '0') {
				if (one > 0) {
					res += 2;
					one = 0;
				}
				else if ((i < n - 1) && (s1[i + 1] == '1')) {
					res += 2;
					one = 0;
					i++;
				}
				else {
					res++;
				}
			}
		}
		cout << res << endl;
	}


	return 0;
}