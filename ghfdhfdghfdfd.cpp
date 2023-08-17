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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ll ob1 = 0, ob2 = 0;
		if (x1 + 1 <= n) {
			ob1++;
		}
		if (x1 - 1 >= 1) {
			ob1++;
		}
		if (y1 - 1 >= 1) {
			ob1++;
		}
		if (y1 + 1 <= m) {
			ob1++;
		}
		if (x2 + 1 <= n) {
			ob2++;
		}
		if (x2 - 1 >= 1) {
			ob2++;
		}
		if (y2 - 1 >= 1) {
			ob2++;
		}
		if (y2 + 1 <= m) {
			ob2++;
		}
		cout << min(ob1, ob2) << endl;
	}


	return 0;
}