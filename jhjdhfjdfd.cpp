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
		// ll n = s.length();
		ll l = 0;
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') {
				l++;
			}
		}
		if ((l == 0) || (l == n)) {
			ans = -1;
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				if ((s[i + 1] == 'L') && (s[i] == 'R')) {
					ans = 0;
				}
				if ((s[i + 1] == 'R') && (s[i] == 'L')) {
					ans = i + 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}


	return 0;
}