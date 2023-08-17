#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	if ((n == 1) && (m == 1)) {
		cout << 0 << endl;
	}
	else if (n == 1) {
		cout << m - 1 << endl;
	}
	else if (m == 1) {
		cout << n - 1 << endl;
	}
	else {
		ll res = n * (m - 1);
		cout << res << endl;
	}


	return 0;
}