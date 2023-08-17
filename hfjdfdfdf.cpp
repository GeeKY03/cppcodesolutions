#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	vi v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll res1 = v[0];
	for (int i = 1; i < n; i++) {
		res1 = res1 ^ v[i];
	}
	// point to be noted is that, res1 can never be zero as the numbers are different
	ll ctr = 0;
	ll num = res1;
	while (num > 0) {
		if (num & 1) {
			break;
		}
		num /= 2;
		ctr++;
	}
	ll res2 = 0;
	ll mask = (1 << ctr);
	for (int i = 0; i < n; i++) {
		if ((v[i]&mask) > 0) {
			res2 = (res2 ^ v[i]);
		}
	}
	res1 = (res1 ^ res2);
	if (res1 > res2) {
		cout << res2 << " " << res1 << endl;
	}
	else {
		cout << res1 << " " << res2 << endl;
	}




	return 0;
}