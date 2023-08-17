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
		string s;
		cin >> n >> s;
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		ll sum = 0;
		for (int i = n - 1; i >= 0; i--) {
			vi temp;
			if (s[i] == '1') {
				for (int j = i; j >= 0; j--) {

					if (s[j] == '0') {
						// cout << v[j] << endl;
						i = j;
						temp.pb(v[j]);
						sort(temp.rbegin(), temp.rend());
						for (int k = 0; k < temp.size() - 1; k++) {
							sum += temp[k];
						}
						break;
					}
					if (j == 0) {
						i = j;
						temp.pb(v[j]);
						sort(temp.rbegin(), temp.rend());
						for (int k = 0; k < temp.size(); k++) {
							sum += temp[k];
						}
						break;
					}
					else {
						temp.pb(v[j]);
					}
				}
			}
		}
		cout << sum << endl;
	}


	return 0;
}