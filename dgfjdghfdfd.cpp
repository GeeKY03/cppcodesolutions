#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
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
		vi a, b, c;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			a.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			c.pb(x);
		}
		// bc then a
		sort(b.begin(),b.begin());
		sort(c.rbegin(),c.rbegin());
		vector<pair<int, int>> d2;
		for (int i = 0; i < n; i++) {
			ll x = b[i] * c[i];
			d2.pb({x, i});
		}
		sort(d2.begin(), d2.end());
		sort(a.rbegin(), a.rend());
		vi cfinal2(n, 0);
		for (int i = 0; i < n; i++) {
			cfinal2[d2[i].second] = a[i];
		}
		for (auto x : cfinal2) {
			cout << x << " ";
		}
		cout << endl;
		ll sum2=0;
		for (int i = 0; i < n; i++) {
			sum2 += b[i] * c[i];
			sum2 += c[i] * a[i];
			sum2 += a[i] * b[i];
		}
		cout<<sum2<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}