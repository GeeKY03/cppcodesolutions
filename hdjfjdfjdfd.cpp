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
	vlli v(100000000, 0);
	map<ll, ll> mp;
	ll t;
	cin >> t;
	while (t--) {
		char c;
		ll x;
		cin >> c >> x;
		if (c == '+') {
			mp[x]++;
		}
		else {
			ll num = 1;
			while (true) {
				ll y = num * x * 1LL;
				if (mp[y] == 0) {
					cout << y << endl;
					break;
				}
				num++;
			}
		}
	}


	return 0;
}