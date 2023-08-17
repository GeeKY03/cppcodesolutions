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
	ll t;
	cin >> t;
	while (t--) {
		ll N;
		cin >> N;
		ll count = 0;
		for (int x1 = 1; x1 * x1 <= N; x1++) {
			int x2 = sqrt(N - x1 * x1);
			if (x1 * x1 + x2 * x2 == N && x2 > 0) {
				count++;
			}
		}
		cout << count << endl;
	}


	return 0;
}