#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
vlli v;

int bs(int y,int n){
	int lo=0,hi=n;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(v[mid]==y){
			return 1;
		}
		else if(v[mid]<y){
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return 0;

}

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	// sort(v.begin(),v.end());
	// for(auto x:v){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	for(int i=0;i<k;i++){
		ll y;
		cin>>y;
		// cout<<bs(y,n)<<endl;
		int num=bs(y,n);
		if(num==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}