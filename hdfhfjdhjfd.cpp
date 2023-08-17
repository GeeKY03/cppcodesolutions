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

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	long long x, low, high, mid;
	x = low = -1; low++;
	high = (1ll << 30) - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((a ^ mid) < (b ^ mid) and (b ^ mid) < (c ^ mid)) {
			x = mid;
			break;
		}
		else if ((a ^ mid) < (b ^ mid)) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	cout << x << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}