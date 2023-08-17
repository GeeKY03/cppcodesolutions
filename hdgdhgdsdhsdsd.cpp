#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vlli v;
		int five = 0;
		int ten = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			if (x % 10 == 0) {
				ten++;
				v.pb(x);
			}
			else if (x % 5 == 0) {
				five++;
				v.pb(x + 5);
			}
			else {
				v.pb(x);
			}
		}
		// for(auto x:v){
		// 	cout<<x<<" ";
		// }
		int flag = 0;
		if ((five > 0) || (ten > 0)) {
			ll n1 = v[0];
			for (int i = 1; i < n; i++) {
				if (v[i] != n1) {
					flag = 1;
					break;
				}
			}
		}
		else {
			v[0] = v[0] + (v[0] % 10);
			int num = v[0] % 10;
			for (int i = 1; i < n; i++) {
				while ((v[i] % 10) != num) {
					v[i] = v[i] + (v[i] % 10);
				}
				ll diff = abs(v[0] - v[i]);
				if (diff % 20 != 0) {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}