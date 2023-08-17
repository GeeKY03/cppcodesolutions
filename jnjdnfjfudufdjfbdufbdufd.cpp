#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,x;
		cin>>n>>m>>x;
		ll c1=0;
		if(m==1){
			c1=1;
		}
		else if(x%n==0){
			c1=x/n;	 
		} 
		else{
			c1=(x/n)+1;
		}
		ll r1=0;
		if(n==1){
			r1=1;
		}
		else if(m==1){
			r1=x;
		}
		else if((x%n==0)){
			r1=m;
		}
		else{
			r1=x%n;
		}
		ll num=(r1-1)*m;
		num=num+c1;
		cout<<num<<endl;
	}
	return 0;
}