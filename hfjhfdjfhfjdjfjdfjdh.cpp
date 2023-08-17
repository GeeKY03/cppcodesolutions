#include<iostream>
using namespace std;
#define ll long long int 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll half= abs(a-b);
		if(half==1){
			cout<<-1<<endl;
		}
		else if((a>2*half)||(b>2*half)||(c>2*half)){
			cout<<-1<<endl;
		}
		else{
			if(c<=half){
				cout<<c+half<<endl;
			}
			else if(c>half){
				cout<<c-half<<endl;
			}
		}
	}
	return 0;
}