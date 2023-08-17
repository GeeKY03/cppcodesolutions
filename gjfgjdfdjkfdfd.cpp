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
		int arr[101] = {0};
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			arr[x]++;
		}
		vector<pair<int, int> > v;
		for (int i = 1; i <= 100; i++) {
			pair<int, int> p = {arr[i], i};
			v.pb(p);
		}

		sort(v.rbegin(), v.rend());
		// for (auto x : v) {
		// 	cout << x.first << " " << x.second << endl;
		// }
		cout << n - v[0].first << endl;
	}


	return 0;
}