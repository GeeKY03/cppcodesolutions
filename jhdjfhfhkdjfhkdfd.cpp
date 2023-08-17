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
		// ab then c
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		vector<pair<int, int>> d;
		for (int i = 0; i < n; i++) {
			ll x = a[i] * b[i];
			d.pb({x, i});
		}
		sort(d.begin(), d.end());
		sort(c.rbegin(), c.rend());
		vi cfinal(n, 0);
		for (int i = 0; i < n; i++) {
			cfinal[d[i].second]=c[i];
		}
		for(auto x:cfinal){
			cout<<x<<" ";
		}
		cout<<endl;
		ll sum1=0;
		for(int i=0;i<n;i++){
			sum1+=a[i]*b[i];
			sum1+=b[i]*cfinal[i];
			sum1+=cfinal[i]*a[i];
		}
		cout<<sum1<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}