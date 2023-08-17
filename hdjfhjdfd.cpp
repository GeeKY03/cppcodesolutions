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


	// Your code goes hereb
	ll n, m;
	cin >> n >> m;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll res = 0;
	ll left = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
		while (sum > m) {
			sum -= v[left];
			left++;
		}
		res = max(res, 1 + i - left);
	}
	cout << res << endl;


	return 0;
}