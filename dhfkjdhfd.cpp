#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

bool check(ll num, ll n, ll k) {
	ll x = num / n;
	if ((num - x) >= k) {
		return true;
	}
	return false;
}

ll bs(ll n, ll k) {
	ll l = 0, r = 100000000000000000 + 5;
	while (l <= r) {
		ll mid = (l + r) / 2;
		if (check(mid, n, k)) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return l;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll x = bs(n, k);
		cout << x << endl;

	}


	return 0;
}