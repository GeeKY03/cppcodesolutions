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
	cin>>t;
	while(t--){
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
		// ca then b
		sort(c.begin(),c.begin());
		sort(a.rbegin(),a.rbegin());
		vector<pair<int, int>> d3;
		for (int i = 0; i < n; i++) {
			ll x = c[i] * a[i];
			d3.pb({x, i});
		}
		sort(d3.begin(), d3.end());
		sort(b.rbegin(), b.rend());
		vi cfinal3(n, 0);
		for (int i = 0; i < n; i++) {
			cfinal3[d3[i].second] = b[i];
		}
		for (auto x : cfinal3) {
			cout << x << " ";
		}
		cout << endl;
		ll sum3=0;
		for (int i = 0; i < n; i++) {
			sum3 += c[i] * a[i];
			sum3 += a[i] * b[i];
			sum3 += b[i] * c[i];
		}
		cout<<sum3<<endl;

	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}