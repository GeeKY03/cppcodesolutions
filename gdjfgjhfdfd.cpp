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
		ll ptr = 0;
		for (int i = 0; i < n; i++) {
			while (b[ptr] < a[i]) {
				ptr++;
			}
			cout << b[ptr] - a[i] << " ";
		}
		cout << endl;
		//for maximum vlaue of d
		int ptr1 = n - 1 , ptr2 = n - 1 ;
		while (ptr1 > 0) {
			if ()
			}

	}



	return 0;
}