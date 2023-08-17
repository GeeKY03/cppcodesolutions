#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Q given an array of numbers in ehich numbers occur teice except two
	ll n;
	cin >> n;
	vi v;

	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);

	}

	ll xor1 = v[0];
	for (int i = 1; i < n; i++) {
		xor1 = (xor1 ^ v[i]);
	}

	// now we need to check the position of first set bit
	int ctr = 0;
	while (xor1 > 0) {
		if (xor1 & 1) {
			break;
		}
		xor1 = xor1 / 2;
		ctr++;
	}

	ll ans1 = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] & 1) {
			ans1 = (ans1 ^ v[i]);
		}
	}
	cout << ans1 << endl;
	cout << (ans1 ^ xor1) << endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}