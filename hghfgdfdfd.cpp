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
	ll a = 0, b = 0, c = 0, d = 0;
	cout << "? " << 1 << " " << 1 << endl;
	cin >> a;
	cout << "? " << 2 << " " << 2 << endl;
	cin >> b;
	cout << "? " << 3 << " " << 4 << endl;
	cin >> c;
	cout << "? " << 3 << " " << 5 << endl;
	cin >> d;
	set<int> sett = {4, 8, 15, 16, 23,  42};
	a = sqrt(a);
	b = sqrt(b);
	vector<int> v;
	v.pb(a);
	sett.erase(sett.find(a));
	v.pb(b);
	sett.erase(sett.find(b));
	// cout << sett.size() << endl;
	// for (auto x : sett) {
	// 	cout << x << " ";
	// }
	// cout << endl;
	for (auto x : sett) {
		cout << x << " ";
	}
	cout << endl;

	// for (auto x : sett) {
	// 	if ((c % x == 0) && (d % x == 0)) {
	// 		// cout << "HI" << endl;
	// 		if ((sett.find((c / x)) != sett.end()) && (sett.find((d / x)) != sett.end())) {
	// 			v.pb(x);
	// 			v.pb(c / x);
	// 			v.pb(d / x);
	// 			sett.erase(sett.find(x));
	// 			sett.erase(sett.find(c / x));
	// 			sett.erase(sett.find(d / x));
	// 			break;
	// 		}

	// 	}
	// }


	// cout << "! ";
	// for (auto x : v) {
	// 	cout << x << " ";
	// }
	// for (auto x : sett) {
	// 	cout << x << endl;
	// }

// 15 23 16 8 4 42


	return 0;
}