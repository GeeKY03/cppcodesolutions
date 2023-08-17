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
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		map<char, int> m;
		string alpha = "abcdefghijklmnopqrstuvwxyz";
		for (int i = 0; i < 26; i++) {
			m[alpha[i]] = 0;
		}
		for (int i = 0; i < n; i++) {
			m[s[i]]++;
		}
		ll y = n / k;
		while (k--) {
			ll ctr = 1;
			bool prt = false;
			for (auto x : m) {
				if (ctr > y) {
					break;
				}
				else if ((m[x.first] == 0) && (prt == false)) {
					cout << alpha[ctr - 1];
					prt = true;
				}
				else if ((ctr == y) && (prt == false)) {
					cout << alpha[ctr];
					m[x.first]--;
					prt = true;
				}
				else {
					m[x.first]--;
				}
				ctr++;
			}
		}
		cout << endl;
	}


	return 0;
}