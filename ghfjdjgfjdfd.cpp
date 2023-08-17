#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll a, b, c;
	cin >> a >> b >> c;
	ll disc = b * b * 1LL;
	disc -= (4LL * a * c);
	if ((a == 0) && (b == 0) && (c == 0)) {
		cout << -1 << endl;
	}
	else if ((a == 0) && (b == 0)) {
		cout << 0 << endl;
	}
	else if (a == 0) {
		cout << 1 << endl;
		cout << fixed << setprecision(10) << (c * -1) / (b * 1.0) << endl;
	}
	else if (disc < 0) {
		cout << 0 << endl;
	}
	else if (disc == 0) {
		cout << 1 << endl;
		double res = (b * -1) / (a * 2.0);
		cout << fixed << setprecision(10) << res << endl;
	}
	else {
		cout << 2 << endl;
		double res = sqrt(disc);
		double r1 = ((b * -1) + res) / (2.0 * a);
		double r2 = ((b * -1) - res) / (2.0 * a);
		if (r1 > r2) {
			cout << fixed << setprecision(10) << r2 << endl;
			cout << fixed << setprecision(10) << r1 << endl;
		}
		else {
			cout << fixed << setprecision(10) << r1 << endl;
			cout << fixed << setprecision(10) << r2 << endl;
		}

	}


	return 0;
}