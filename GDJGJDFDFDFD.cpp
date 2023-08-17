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
		ll n,q;
		cin>>n>>q;
		vi v;
		int arr[n];
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
		}
		int iq=0;
		int sum=0;
		for(int i=n-1;i>=0;i--){
			if(v[i]<=iq){
				arr[i]=1;
			}
			else if(iq<q){
				iq++;
				arr[i]=1;
			}
			else{
				arr[i]=0;
			}
		}
		for(auto x: arr){
			cout<<x;
		}
		cout<<endl;
	}





	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}