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
	ll t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		if (a == b) {
			cout << "ANY" << endl;
		}
		else if (a < b) {
			cout << "FIRST" << endl;
		}
		else {
			cout << "SECOND" << endl;
		}
	}


	return 0;
}