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
		string s1, s2, s;
		for (int i = 0; i < n / 2; i++) {
			char x;
			cin >> x;
			s1.pb(x);
			s.pb(x);
		}
		for (int i = 0; i < n / 2; i++) {
			char x;
			cin >> x;
			s2.pb(x);
			s.pb(x);
		}
		// cout << s << endl;
		if ((s1 + s2 == s) && (s2 + s1 == s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}