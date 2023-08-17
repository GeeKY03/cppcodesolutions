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
	sort(v.begin(), v.end());
	int pt1 = 0, pt2 = n - 1;
	ll res = 0;
	ll ctr = 0;
	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;
	while (pt2 > pt1 + 1) {
		if (v[pt2] >= d) {
			ctr++;
			pt2--;
		}
		else {
			ll count = 0;
			if (d % v[pt2] == 0) {
				count = d / v[pt2];
				count--;
			}
			else {
				count = d / v[pt2];
			}
			if ((pt1 + count < pt2)) {
				pt1 += count;
				pt2--;
				ctr++;
			}
		}
	}
	cout << ctr << endl;


	return 0;
}