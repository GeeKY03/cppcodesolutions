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
	ll w,h,n;
	cin>>w>>h>>n;
	ll dim=0;
	ll a=0,b=0;
	int lo=0,hi=1000000000;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		ll a=mid/w;
		ll b=mid/h;
		if(((a*b)>=n)&&((a-1)*(b-1)<n)){
			cout<<mid<<endl;
			break;
		}
		else if((a*b)<n){
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}