#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


bool iD(ll x, ll y) {
	if (y == 1)
		return true;

	ll z = __gcd(x, y);

	if (z == 1)
		return false;

	return iD(x, y / z);
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		if (iD(a, b) == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}



	return 0;
}