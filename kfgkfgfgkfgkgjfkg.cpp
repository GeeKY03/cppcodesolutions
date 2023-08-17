#include<iostream>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int num=n;
		for(int i=n-1;i>0;i++){
			if((num&(i))==0){
				cout<<i<<endl;;
			}
			else{
				num=num&(i);
			}
		}
	}
	return 0;
}