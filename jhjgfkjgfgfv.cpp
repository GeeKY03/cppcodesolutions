#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void path(ll &ctr, ll n, ll m) {
	if ((n == 1) && (m == 1)) {
		ctr++;
		return ;
	}
	if (n - 1 >= 1) {
		path(ctr, n - 1, m);
	}
	if (m - 1 >= 1) {
		path(ctr, n, m - 1);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	ll ctr = 0;
	path(ctr, n, m);
	cout << ctr << endl;


	return 0;
}