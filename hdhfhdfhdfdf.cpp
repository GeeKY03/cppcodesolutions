#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
// #define endl '\n'
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	// FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	ll a = 0, b = 0, c = 0;
	cout << "? " << 1 << " " << 2 << endl;
	cin >> a;
	cout << "? " << 2 << " " << 3 << endl;
	cin >> b;
	cout << "? " << 1 << " " << 3 << endl;
	cin >> c;
	vlli v;
	ll x = (a + b - c);
	v.pb(a - x);
	v.pb(x);
	v.pb(b - x);
	n -= 3;
	ll pos = 4;
	ll sum = c;
	while (n--) {
		ll y;
		cout << "? " << 1 << " " << pos << endl;
		cin >> y;
		v.pb(y - sum);
		sum = y;
		pos++;
	}
	cout << "! ";
	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;



	return 0;
}