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
		ll n, k;
		cin >> n >> k;
		int arr[k];
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		bool flag = false;
		if (k == 1) {
			flag = true;
		}
		else {
			vi v;
			for (int i = k - 1; i > 0; i--) {
				ll x = arr[i] - arr[i - 1];
				v.pb(x);

			}
			bool check = is_sorted(v.rbegin(), v.rend());
			if (v.size() == 1) {
				check = true;
			}
			if (check) {
				ll left = n - k + 1;
				float sample = (float)arr[0] / (float)left;
				// cout << sample << endl;
				if (sample <= v[v.size() - 1]) {
					flag = true;
				}
			}
			else {
				flag = false;
			}
		}
		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}