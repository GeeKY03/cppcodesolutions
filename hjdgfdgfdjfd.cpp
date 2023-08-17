#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	vector<ll> a, b;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		b.pb(x);
	}
	vector<ll> diff;
	for (int i = 0; i < n; i++) {
		diff.pb(a[i] - b[i]);
	}
	sort(diff.begin(), diff.end());

	ll res = 0;
	for (int i = 0; i < n; i++) {
		if (diff[i] > 0) {
			ll x = lower_bound(diff.begin(), diff.end(), -diff[i] + 1) - diff.begin();
			res += i - x;
		}
	}
	cout << res << endl;


	return 0;
}