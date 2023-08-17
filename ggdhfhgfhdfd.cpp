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
		vi traina, trainb;
		traina.pb(0);
		trainb.pb(0);
		ll sum = 0;
		for (int i = 1; i < n; i++) {
			ll x;
			cin>>x;
			trainb.pb(x);
			sum+=x;
			traina.pb(sum);
		}
		// for(auto x:traina){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;
		// for(auto x:trainb){
		// 	cout<< x << " " ;
		// }
		// cout<<endl;
		for(int i=0;i<n-1;i++){
			ll y=traina[i+1]-trainb[i];
			if(y<0){
				trainb[i+1]=trainb[i]+trainb[i+1];
			}
			else{
				trainb[i+1]=trainb[i]+trainb[i+1]+y;
			}
		}
		cout<<trainb.back()<<endl;
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}