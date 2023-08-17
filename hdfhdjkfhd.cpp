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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if (n == 3) {
			cout << "NO" << endl;
		}
		else if (n % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < n / 2; i++) {
				cout << 1 << " " << -1 << " ";
			}
			cout << endl;
		}
		else {
			cout << "YES" << endl;
			for (int i = 0; i < n / 2; i++) {
				cout << 1 - (n / 2) << " " << n / 2 << " ";
			}
			cout << 1 - (n / 2) << endl;
		}
	}


	return 0;
}