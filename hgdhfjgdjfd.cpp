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

int calculateGrundyNumber(ll A[], ll N) {
	ll grundy = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] > 0) {
			grundy ^= A[i];
		}
	}
	return grundy;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		ll x = calculateGrundyNumber(arr, n);
		if (x == 0) {
			cout << "second" << endl;
		}
		else {
			cout << "first" << endl;
		}
	}



	return 0;
}