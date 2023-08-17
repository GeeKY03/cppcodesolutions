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
		string s;
		cin >> s;
		string a, b;
		int flag = 0;
		for (int i = 0; i < n; i++) {
			if ((s[i] == '1') && (flag == 0)) {
				a.pb('0');
				b.pb('1');
				flag = 1;
			}
			else if (flag == 0) {
				if (s[i] == '0') {
					a.pb('0');
					b.pb('0');
				}
				else if (s[i] == '2') {
					a.pb('1');
					b.pb('1');
				}
			}
			else if (flag == 1) {
				a.pb(s[i]);
				b.pb('0');
			}
		}
		cout << b << endl;
		cout << a << endl;
	}


	return 0;
}