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


	ll n,k;
	cin>>n>>k;
	vlli v;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	int ind=0;
	for(int i=0;i<k;i++){
		ll q;
		cin>>q;
		int lo=0,hi=5;
		while(lo<hi){
			ll mid=(lo+hi)/2;
			if(v[mid]==q){
				ind=mid;
				break;
			}
			else if(v[mid]>q){
				hi=mid-1;
			}
			else{
				lo=mid+1;
			}
		}
		if(hi==n){
			cout<<hi<<endl;
		}
		else{
			cout<<hi+1<<endl;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}