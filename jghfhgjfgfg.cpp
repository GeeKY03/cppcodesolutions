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
		ll n, k;
		cin >> n >> k;
		vi pos(100000 + 5);
		vi v(100000 + 5);
		for (int i = 1; i <= n; i++) {
			ll x;
			cin >> x;
			v[i] = x;
			pos[x] = i;
		}
		// for (int i = 1; i <= n; i++) {
		// 	cout << v[i] << ": " << pos[v[i]] << endl;
		// }
		for (int i = 1; i <= n; i++) {
			if (v[i] > i) {
				int temp = i;
				while (temp < v[i]) {
					if (abs(pos[v[i]] - pos[temp]) >= k) {
						ll a = v[i], b = temp;
						v[pos[b]] = a;
						v[i] = temp;
						break;
					}
					temp++;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}


	return 0;
}