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
	ll n, d;
	cin >> n >> d;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	sort(v.rbegin(), v.rend());
	ll size = n;
	ll pt1 = 0;
	ll res = 0;
	ll ctr = 0;
	for (auto x : v) {
		cout << x << " ";
	}
	while (pt1 < size) {
		if (v[pt1] >= d) {
			ctr++;
			pt1++;
			size--;
		}
		else {
			ll count = 0;
			if (d % v[pt1] == 0) {
				count = d / v[pt1];
				count--;
			}
			else {
				count = d / v[pt1];
			}
			if (pt1 + count <= size) {
				pt1 += count;
				size -= count;
				ctr++;
			}
		}
	}
	cout << ctr << endl;



	return 0;
}