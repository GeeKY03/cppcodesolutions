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
		string arr[2];
		cin >> arr[0];
		cin >> arr[1];
		sort(arr, arr + 2);
		string s2 = arr[0];
		string s1 = arr[1];
		bool chk = true;
		ll sz1 = s1.size();
		ll sz2 = s2.size();
		if (sz1 % sz2 != 0) {
			chk = false;
		}
		else {
			for (int i = 0; i <= sz1 - sz2 + 1; i += sz2 - 1) {
				for (int j = 0; j < sz2; j++) {
					cout << s2[j];
				}
				cout << endl;
			}
		}
		// ll num = 0;
		// if (chk == true) {
		// 	num = ((sz1 * sz2) / __gcd(sz1, sz2));
		// 	for (int i = 0; i < num; i++) {
		// 		cout << s2;
		// 	}
		// 	cout << endl;
		// }
		// else {
		// 	cout << -1 << endl;
		// }
	}


	return 0;
}