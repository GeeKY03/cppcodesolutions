#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void path(ll &ctr , ll n, ll m, ll i, ll j) { // i-row  j-col
	if ((i == n - 1) && (j == m - 1)) {
		ctr++;
		return ;
	}

	//go right
	if (j + 1 < m) {
		path(ctr, n, m, i, j + 1);
	}
	if (i + 1 < n) {
		path(ctr, n, m, i + 1, j);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	ll i = 0, j = 0;
	ll ctr = 0;
	path(ctr, n, m, i, j);
	cout << ctr << endl;


	return 0;
}