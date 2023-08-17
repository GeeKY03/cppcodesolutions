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
	ll n;
	cin >> n;
	map<ll, ll> mp;
	for (int i = 0; i < (n * (n - 1) / 2) - 1; i++) {
		ll x, y;
		cin >> x >> y;
		mp[x]++;
		mp[y]++;
	}
	vi v;
	for (auto x : mp) {
		if (x.second != n - 1) {
			v.pb(x.first);
		}
	}
	sort(v.begin(), v.end());
	cout << v[1] << " " << v[0] << endl;


	return 0;
}