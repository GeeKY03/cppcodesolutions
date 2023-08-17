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
		ll n, x;
		cin >> n >> x;
		ll mn = 1000000;
		int arr[500001] = {0};
		for (int i = 0; i < n; i++) {
			ll y;
			cin >> y;
			arr[y]++;
			if (mn == 1) {
				continue;
			}
			else {
				mn = min(mn, y);
			}
		}
		if (arr[1] & 1) {
			cout << "No" << endl;
		}
		else {
			arr[2] += (arr[1] / 2);
			if (mn >= x) {
				cout << "Yes" << endl;
			}
			else {
				ll num = 0;

			}
		}
	}


	return 0;
}