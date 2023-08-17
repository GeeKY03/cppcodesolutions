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
	ll n, m;
	cin >> n >> m;
	vector<vector<ll> > v(n + 1, vector<ll> (m + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char x;
			cin >> x;
			v[i][j] = x - 48;
		}
	}
	set<int> sett;
	for (int j = 1; j <= m; j++) {
		ll mx = 0;
		for (int i = 1; i <= n; i++) {
			mx = max(mx, v[i][j]);
		}
		for (int i = 1; i <= n; i++) {
			if (v[i][j] == mx) {
				sett.insert(i);
			}
		}
	}
	cout << sett.size() << endl;


	return 0;
}