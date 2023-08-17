#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int count=0;
		for(int i=0;i<500;i++){
			if(n==1){
				count=0;
				break;
			}
			if((n%6!=0)||(n%2!=0)){
				n=n*2;
			}
			else{
				n=n/6;
			}
			if(n==1){
				count=i+1;
				break;
			}
		}
		if(n==1){
			cout<<count<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}