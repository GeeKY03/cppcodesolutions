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
	ll n, d;
	cin >> n >> d;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll pt1 = 0, pt2 = n - 1, ctr = 0;
	sort(v.rbegin(), v.rend());
	ll p = 0, x = 0;
	while (1 == 1) {
		ll q = d / v[pt1];
		p += q + 1;
		x++;
		if

	}
cout << ctr << endl;


return 0;
}