#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,x;
		ll num=0;
		cin>>n>>m>>x;
		if(n==1){
			num=x;
		}
		else if(m==1){
			num=x;
		}
		else if((n==1)&&(m==1)){
			num=1;
		}
		else{
			ll c1=0;
			if(x%n==0){
				c1=x/n;
			}
			else{
				c1=(x/n)+1;
			}
			ll r1=0;
			if(x%n==0){
				r1=n;
			}
			else{
				r1=x%n;
			}
			num=((r1-1)*m)+c1;
		}
		cout<<num<<endl;
	}
	return 0;
}