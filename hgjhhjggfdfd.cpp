#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int w,h,n;

bool good(ll x){
	return ((x/w)*(x/h))>=n;
}

int main(){
	IOS
	
	cin>>w>>h>>n;
	ll lo=0;
	ll hi=1;
	while(!good(hi)){
		hi*=2;
	}
	while(hi>lo+1){
		ll mid=(lo+hi)/2;
		if(good(mid)){
			hi=mid;
		}
		else{
			lo=mid;
		}
	}
	cout<<hi<<endl;
	return 0;
}