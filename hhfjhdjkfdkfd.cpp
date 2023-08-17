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
	ll n, k;
	cin >> n >> k;
	vlli v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	map<int, list<int>> mp;
	for (int i = 0; i < n; i++) {
		mp[v[i]].push_back(i);
	}
	ll ctr = 0;
	for (auto x : mp) {
		for (auto y : x.ss) {
			ll sz = x.ss.size();
			auto it = lower_bound(x.ss.begin(), x.ss.end(), y + k);
			if (it != x.ss.end()) {
				ll dist = distance(x.ss.begin(), it);
				ctr += sz - dist;
			}
		}
	}
	cout << ctr << endl;



	return 0;
} t