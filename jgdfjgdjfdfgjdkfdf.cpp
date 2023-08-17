#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll smd(int n) {
	if (n % 2 == 0)
		return 2;
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return i;
	}
	return n;
}

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
		vlli v;
		set<ll> sett, removed;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				sett.insert(i + 1);
			}
			v.pb(i + 1);
		}
		ll res = 0;
		for (int i = 0; i < n; i++) {
			if ((sett.size() == 0) || (removed.size() == n)) {
				break;
			}
			ll temp = i + 1;
			ll num = 1;
			while (temp * num <= n) {
				auto it = removed.find(temp * num);
				auto itt = sett.find(temp * num);
				if ((it == removed.end()) && (itt == sett.end())) {
					break;
				}
				else if ((it == removed.end()) && (itt != sett.end())) {
					res += temp;
					removed.insert(temp * num);
					sett.erase(itt);
					num++;
				}
				else if ((it != removed.end()) && (itt == sett.end())) {
					num++;
				}
			}
		}
		cout << res << endl;
	}


	return 0;
}