#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

double func(vector<double> &v, double mid, int n) {
	double ref = 0;
	for (int i = 0; i < n; i++) {
		double diff = abs(v[i] - mid);
		ref = max(diff, ref);
	}
	return ref;
}

// 5 3
// 4 2
// 7 5
// 2 1
// 10 4
// 4 6


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		vi pos, tem;
		cin >> n;
		vector<ll> v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v[i] += x;
		}
		sort(v.begin(), v.end());
		double val1 = v[0];

	}


	return 0;
}