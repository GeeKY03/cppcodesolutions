#include<bits/stdc++.h>
using namespace std;
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
		ll l = 0, r = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') {
				l++;
			}
		}
		ll res = 0;
		if ((l == 0) || (l == n)) {
			res = -1;
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				if ((s[i + 1] == 'L') && (s[i] == 'R')) {
					res = 0;
				}
				if ((s[i + 1] == 'R') && (s[i] == 'L')) {
					res = i + 1;
					break;
				}
			}
		}
		cout << res << endl;
	}


	return 0;
}