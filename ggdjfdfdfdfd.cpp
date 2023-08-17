#include<bits/stdc++.h>
using namespace std;
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
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, k;
	cin >> n >> k;
	if ((k == 0) && (n > 1)) {
		cout << -1 << " " << -1 << endl;
	}
	else if ((k == 0) && (n == 1)) {
		cout << 0 << " " << 0 << endl;
	}
	else if (k > (9 * n)) {
		cout << -1 << " " << -1 << endl;
	}
	else {
		vi v1(n, 0); // for min
		vi v2(n, 0); // for max
		for (int i = 0; i < n; i++) {
			int
		}

	}


	return 0;
}