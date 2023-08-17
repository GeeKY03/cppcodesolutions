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
		ll n, x, y;
		cin >> n >> x >> y;
		priority_queue <ll, vector<ll>, greater<ll>> pq;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			pq.push(x);
		}
		while (y > 0) {
			ll min = pq.top();
			ll num = min ^ x;
			if (num > min) {
				pq.pop();
				pq.push(num);
				y--;
			}
			else {
				if (y & 1) {
					pq.pop();
					pq.push(num);
					break;
				}
				else {
					break;
				}
			}
		}
		while (! pq.empty() ) {
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}