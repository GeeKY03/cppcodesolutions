#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

vector<int> v1;

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, m ;
		cin >> n >> m;
		int flag = 0;
		if ((n == 1) || (m == 1)) {
			vi v;
			for (int i = 0; i < max(n, m); i++) {
				ll x;
				cin >> x;
				v1.pb(x);
				v.pb(x);
			}
			for (int i = 0; i < max(n, m); i++) {
				ll x;
				cin >> x;
				if (x != v[i]) {
					flag = 1;
				}
			}
		}
		else {
			multiset<ll> odd;
			multiset<ll> eve;
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= m; j++) {
					ll x;
					cin >> x;
					if ((i + j) & 1) {
						v1.pb(x);
						odd.insert(x);
					}
					else {
						v1.pb(x);
						eve.insert(x);
					}
				}
			}
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= m; j++) {
					ll x;
					cin >> x;
					if ((i + j) & 1) {
						if (odd.find(x) == odd.end()) {
							flag = 1;
						}
						else {
							odd.erase(odd.find(x));
						}
					}
					else {
						if (eve.find(x) == eve.end()) {
							flag = 1;
						}
						else {
							eve.erase(eve.find(x));
						}
					}
				}
			}
		}
		if (flag) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
		v1.clear();
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}