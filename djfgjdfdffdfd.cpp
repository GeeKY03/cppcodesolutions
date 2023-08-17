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
	ll ctr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ll x;
			cin >> x;
			if (x != 0) {
				ctr++;
			}
		}
	}
	cout << ctr << endl;


	return 0;
}