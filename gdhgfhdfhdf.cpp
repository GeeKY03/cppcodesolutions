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
	ll n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	ll p1 = 0, p2 = n - 1;
	ll ctr = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'O') {
			ctr++;
		}
	}
	while (p1 < p2) {
		ll ff = p1, fl = p2;
		for (int i = p1; i < p2; i++) {
			if (s[i] == 'O') {
				ff = i - p1;
				break;
			}
		}
		for (int i = p2; i > p1; i--) {
			if (s[i] == 'O') {
				fl = p2 - i;
				break;
			}
		}
		if (ff < fl) {
			p1 += ff + 1;
			ctr--;
		}
		else {
			p2 -= fl + 1;
			ctr--;
		}
		if (ctr <= m) {
			break;
		}
	}
	cout << p2 - p1 + 1 << endl;


	return 0;
}