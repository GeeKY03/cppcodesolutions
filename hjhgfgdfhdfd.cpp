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
	int n;
	cin >> n;
	vi arr;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.pb(x);
	}
	int best = 0;
	int ind = 0;
	for (int i = 1; i < n; i++) {
		if ((arr[i] % 2 == 0) || (arr[i] % 3 == 0)) {
			best = max(best, i - ind);
			ind = i;
		}
	}
	cout << best << endl;



	return 0;
}