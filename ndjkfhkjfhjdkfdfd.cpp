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
		vi a, b;
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
		// for minnimum values of d
		vi v1;
		ll ptr1 = 0;
		for (int i = 0; i < n; i++) {
			while (b[ptr1] < a[i]) {
				ptr1++;
			}
			cout << b[ptr1] - a[i] << " ";
		}
		cout << endl;
		//for maximum value of d
		int i = 0, j = 0;

		while (i < n) {
			j = max(i, j);
			while (j < n - 1 && a[j + 1] <= b[j]) {
				j++;
			}
			cout << b[j] - a[i] << " ";
			i++;
		}
		cout << endl;


	}


	return 0;
}