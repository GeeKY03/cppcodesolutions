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
	ll n;
	cin >> n;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		v[i].pb(x);
		v[i].pb(y);
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x[0] << " " << x[1] << endl;
		cout << endl;
	}


	return 0;
}