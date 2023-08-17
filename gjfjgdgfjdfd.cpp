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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	bool chk = false;
	set<ll> sett;
	vi plats;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			plats.pb(i + 1);
			sett.insert(i + 1);
		}
	}
	// for (auto x : plats) {
	// 	cout << x << " ";
	// }
	// cout << endl;
	ll x = sett.size();
	for (int i = 1; i <= (n / 4); i++) {
		ll ind = 0;
		while (ind < x - 1) {
			ll ctr = 0;
			ll num = plats[ind];
			while (sett.find(num + i) != sett.end()) {
				num += i;
				ctr++;
				// cout << num << " " << ctr << endl;
				// cout << "BEEP" << endl;
				if (ctr == 4) {
					chk = true;
					break;
				}
			}
			ind++;
		}

	}
	if (chk) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}