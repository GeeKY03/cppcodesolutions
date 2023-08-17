#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long binexp(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1) {
			res = res * a;
		}
		a = a * a;
		b >>= 1;
	}
	return res;
}

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	vi v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);

	}

	ll mask = 1;
	int flag = 0;
	vi bits;
	for (int i = 0; i < 31; i++) {
		ll sum = 0;
		for (int j = 0; j < n; j++) {
			sum += (v[j] & mask);
		}
		if (sum % 3 == 0) {
			bits.pb(0);
		}
		else {
			bits.pb(1);
		}
		mask = (mask << 1);
	}
	ll num = 0;
	for (int i = 0; i < n; i++) {
		num += binexp(2, i) * bits[i];
	}
	cout << num << endl;





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}