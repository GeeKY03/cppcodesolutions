#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

ll n, x, y;

bool good(ll mid) {
	return ((mid / x) + (mid / y)) >= n;
}

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin >> n >> x >> y;
	n--;
	ll l = 0, r = n * min(x, y);
	while (l + 1 < r) {
		ll mid = (l + r) / 2;
		if (good(mid)) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	cout << r + min(x, y) << endl;




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}