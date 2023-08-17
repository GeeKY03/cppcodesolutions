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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vi v;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
		}
		int arr[n] = {0};
		ll ref = v[0];
		arr[0] = ref;
		int flag = 0;
		for (int i = 1; i < n; i++) {
			if (((ref + v[i]) > 0) && ((ref - v[i]) > 0) && (v[i] != 0)) {
				flag = 1;
				break;
			}
			else {
				if (ref + v[i] > 0) {
					ref += v[i];
				}
				else {
					ref -= v[i];
				}
			}
			arr[i] = ref;
		}
		if (flag == 1) {
			cout << -1 << endl;
		}
		else {
			for (auto x : arr) {
				cout << x << " ";
			}
			cout << endl;
		}
	}


	return 0;
}