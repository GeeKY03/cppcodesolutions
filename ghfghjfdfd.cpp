#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
// #define endl '\n'
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	// FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	set<int> sett = {4, 8, 15, 16, 23,  42};
	ll a = 0, b = 0, c = 0, d = 0;
	cout << "? " << 1 << " " << 2 << endl;
	cin >> a;
	cout << "? " << 1 << " " << 3 << endl;
	cin >> b;
	cout << "? " << 1 << " " << 4 << endl;
	cin >> c;
	cout << "? " << 1 << " " << 5 << endl;
	cin >> d;
	vlli v;

	for (auto x : sett) {
		if ((a % x == 0) && (b % x == 0) && (c % x == 0) && (d % x == 0)) {
			if (sett.find(a / x) != sett.end()) {
				if ((sett.find(b / x) != sett.end()) && ((b / x) != (a / x))) {
					if ((sett.find(c / x) != sett.end()) && ((c / x) != (a / x)) && ((c / x) != (b / x))) {
						if ((sett.find(d / x) != sett.end()) && ((d / x) != (a / x)) && ((d / x) != (b / x)) && ((d / x)) != (c / x)) {
							v.pb(x);
							v.pb(a / x);
							v.pb(b / x);
							v.pb(c / x);
							v.pb(d / x);
							sett.erase(sett.find(x));
							sett.erase(sett.find(a / x));
							sett.erase(sett.find(b / x));
							sett.erase(sett.find(c / x));
							sett.erase(sett.find(d / x));
							break;
						}
					}
				}
			}
		}
	}
	cout << "! ";
	for (auto x : v) {
		cout << x << " ";
	}
	for (auto x : sett) {
		cout << x << " ";
		cout << endl;
	}
	// 42 4 8 15 16 23




	return 0;
}