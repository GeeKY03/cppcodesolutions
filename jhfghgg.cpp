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
	ll n, msp;
	cin >> n >> msp;
	vlli v, v1;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v1.pb(x);
	}
	sort(v1.begin(), v1.end());
	ll pt1 = 0, pt2 = n - 1;
	vlli left;
	while (pt2 - pt1 >= 0) {
		if (pt1 == pt2) {
			v.pb(v1[pt1]);
			pt1++;
			pt2--;
		}
		else if (v1[pt2] + v1[pt1] > msp) {
			left.pb(v1[pt2]);
			pt2--;
		}
		else {
			v.pb(v1[pt2]);
			v.pb(v1[pt1]);
			pt2--;
			pt1++;
		}
	}
	for (auto x : left) {
		v.pb(x);
	}
	// for (auto x : v) {
	// 	cout << x << " ";
	// }
	ll tm = v[0], sp = v[0];
	for (int i = 1; i < n; i++) {
		if ((msp - sp) >= v[i]) {
			sp += v[i];
			tm += v[i];
			sp -= v[i - 1];
		}
		else {
			tm++;
			sp = 0;
			tm += v[i];
			sp = v[i];
		}
		// cout << tm << " " << sp << endl;
	}
	if (sp > 0) {
		tm++;
	}
	cout << tm << endl;


	return 0;
}