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
	ll n;
	cin >> n;
	vi v;
	while (n > 0) {
		if (n & 1) {
			v.pb(1);
		}
		else {
			v.pb(0);
		}
		n >>= 1;
	}
	reverse(v.begin(), v.end());
	for (auto x : v) {
		cout << x;
	}


	return 0;
}