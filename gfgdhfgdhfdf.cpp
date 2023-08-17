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

ll checkAvailability(vector<ll> boxes, ll groupSize, ll k) {
	ll required = groupSize * k;
	for (ll i = 0; i < boxes.size(); i++) {
		ll temp = min(min(boxes[i], groupSize), required);
		required -= temp;
		if (required == 0) {
			return true;
		}
	}
	return false;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		vlli boxes;
		ll totalSum = 0;
		for (int i = 0; i < n; i++) {
			ll boxSize;
			cin >> boxSize;
			boxes.pb(boxSize);
			totalSum += boxSize;
		}
		ll maxGroupSize = 0, left = 0, right = totalSum;
		while (left <= right) {
			ll mid = left + (right - left) / 2;
			if (checkAvailability(boxes, mid, k)) {
				left = mid + 1;
				maxGroupSize = max(maxGroupSize, mid);
			}
			else {
				right = mid - 1;
			}
		}
		cout << maxGroupSize << endl;
	}

	return 0;
}
