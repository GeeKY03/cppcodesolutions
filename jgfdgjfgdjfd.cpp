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
		ll n0, n1, n2;
		cin >> n0 >> n1 >> n2;
		string s;
		ll sz = 0;
		if (n0 > 0) {
			if (sz == 0) {
				s += "00";
				n0--;
				sz += 2;
			}
			for (int i = 0; i < n0; i++) {
				sz++;
				s.pb('0');
			}
		}
		if (n2 > 0) {
			s += "11";
			if (sz == 0) {
				n2--;
			}
			else {
				n1--;
				n2--;
			}
			sz += 2;
			for (int i = 0; i < n2; i++) {
				s.pb('1');
			}
		}
		if (n1 > 0) {
			if (sz == 0) {
				s += "10";
				n1--;
				sz += 2;
				for (int i = 0; i < n1; i++) {
					if (i & 1) {
						s.pb('0');
					}
					else {
						s.pb('1');
					}
				}
			}
			else {
				if (s[sz - 1] == '0') {
					for (int i = 0; i < n1; i++) {
						if (i & 1) {
							s.pb('0');
						}
						else {
							s.pb('1');
						}
					}
				}
				else {
					for (int i = 0; i < n1; i++) {
						if (i & 1) {
							s.pb('1');
						}
						else {
							s.pb('0');
						}
					}
				}
			}
		}
		cout << s << endl;
	}


	return 0;
}