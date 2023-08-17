#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll l,r,a;
		cin>>l>>r>>a;
		ll modr=r%a;
		ll modl=l%a;
		if(a==1){
			cout<<(r/a)+r%a<<endl;
		}
		else if((l/a)<(r/a)){
			if(r%a==(a-1)){
				cout<<(r/a)+(a-1)<<endl;
			}
			else{
				cout<<((r/a)-1)+(a-1)<<endl;
			}
			
		}
		else{
			cout<<(r/a)+(r%a)<<endl;
		}
	}
	return 0;
}