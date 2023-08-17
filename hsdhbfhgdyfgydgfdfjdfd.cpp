#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		if(s==0){
			cout<<0<<endl;
		}
		else{
		    ll num=n*n;
		    cout<<s/num<<endl;
	    }
	}
	return 0;
}