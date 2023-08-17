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
	ll t;
	cin >> t;
	while (t--) {
		ll n, u, d;
		cin >> n >> u >> d;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] != 'a') {
				// down count
				ll dc = (s[i] - 97);
				ll uc = (123 - s[i]);

				if (d > u + 26) {
					if (true) {
						if (d >= dc) {
							d -= dc;
							s[i] = 'a';
						}
						else {
							s[i] = char(s[i] - d);
							d = 0;
						}
					}
					else if (u >= uc) {
						s[i] = 'a';
						u -= uc;
					}
				}
				else {
					if (u >= uc) {
						s[i] = 'a';
						u -= uc;
					}
					else {
						if (d >= dc) {
							d -= dc;
							s[i] = 'a';
						}
						else {
							s[i] = char(s[i] - d);
							d = 0;
						}
					}
				}
			}
		}
		cout << s << endl;
	}


	return 0;
}