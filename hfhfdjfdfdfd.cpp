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
	ll n;
	cin >> n;
	vector<pair<ll, ll>> v1, v2;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		v1.pb({x, 0}); v2.pb({y, 0});
	}
	ll k = n / 2;
	// for (int i = 0; i <= k; i++) {
	// 	ll i1 = i, i2 = i;
	// 	for (int j = 0; j < i; j++) {
	// 		v1[j].second++;
	// 		v2[j].second++;
	// 	}
	// 	ll left = n - (2 * i);
	// 	while (left--) {
	// 		if (v1[i1] < v2[i2]) {
	// 			v1[i1].second++;
	// 			i1++;
	// 		}
	// 		else {
	// 			v2[i2].second++;
	// 			i2++;
	// 		}
	// 	}
	// }
	ll i1 = 0, i2 = 0;
	ll temp = n;
	while (temp--) {
		if (v1[i1] < v2[i2]) {
			v1[i1].second++;
			i1++;
		}
		else {
			v2[i2].second++;
			i2++;
		}
	}
	string samp;
	for (int i = 0; i < n / 2; i++) {
		samp.pb('1');
	}
	cout << samp;
	for (int i = k; i < n; i++) {
		if (v1[i].second > 0) {
			cout << '1';
		}
		else {
			cout << '0';
		}
	}
	cout << endl;
	cout << samp;
	for (int i = k; i < n; i++) {
		if (v2[i].second > 0) {
			cout << '1';
		}
		else {
			cout << '0';
		}
	}



	return 0;
}