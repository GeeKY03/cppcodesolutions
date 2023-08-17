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
		string s;
		cin >> s;
		string a, c;
		a = s[0];
		c = *(s.end() - 1);
		s.erase(s.begin());
		vector<string> v ;
		s.erase(s.end() - 1);
		ll bs = s.size();
		bool prt = false;
		while (bs > 0) {
			v = {a, s, c};
			sort(v.begin(), v.end());
			if ((v[0] == s) || (v[2] == s)) {
				cout << a << " " << s << " " << c << endl;
				prt = true;
				break;
			}
			else {
				if (v[0] == a) {
					a.pb(*s.begin());
					s.erase(s.begin());
					bs--;
				}
				else {
					string temp;
					temp.pb(*(s.end() - 1));
					temp .append(c);
					c = temp;
					s.erase((s.end() - 1));
					bs--;
				}
			}
		}
		if (prt != true) {
			if (v[1] == s) {
				cout << a << " " << s << " " << c << endl;
			}
			else {
				cout << ":(" << endl;
			}
		}
	}


	return 0;
}