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
	ll n,k;
	cin>>n>>k;
	vlli v;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	ll lo=0, hi=n;
	for(int i=0;i<k;i++){
		ll q;
		cin>>q;
		int lo=0,hi=n-1;
		while(lo+1<hi){
			ll mid=(lo+hi)/2;
			if(v[mid]==q){
				break;
			}
			else if(v[mid]<=q){
				lo=mid;
			}
			else{
				hi=mid;
			}
		}
		// cout<<v[lo]<<" "<<v[hi]<<endl;
		// if(v[hi]<q){
		// 	cout<<hi+1<<endl;
		// }
		// else{
		// 	if(lo==0){
		// 		cout<<0<<endl;
		// 	}
		// 	else{
		// 		cout<<lo<<endl;
		// 	}
		// }
		if(v[hi]<=q){
			cout<<hi+1<<endl;
		}
		else{
			if(v[lo]<=q){
				cout<<lo+1<<endl;
			}
			else{
				cout<<lo<<endl;
			}
		}
	}



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}