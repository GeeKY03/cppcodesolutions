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
	vi a;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	sort(a.rbegin(), a.rend());
	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;
	ll p = 0;
	ll x = 0;
	ll ans = 0;
	while (true) {
		ll q = d / a[x];
		if (d % a[x] == 0) {
			q--;
		}
//		cout<<q<<endl;
		p = p + q + 1;
//		cout<<p<<endl;
		cout << p << " " << q << " " << x << endl;
		x ++;
		cout << x << endl;

		if (p <= n) {
			ans++;
		}
		else {
			break;
		}
	}
	cout << endl;
	cout << ans << endl;


	return 0;
}