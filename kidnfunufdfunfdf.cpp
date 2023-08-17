#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int num=max(a,max(b,c));
		if((a==0)&&(b==0)&&(c==0)){
			cout<<1<<" "<<1<<" "<<1<<endl;
		}
		else{
		    if(num==a){
			    if((a!=b)&&(a!=c)){
			    	cout<<0<<" ";
			    }
			    else{
			    	cout<<1<<" ";
			    }
		    }
		    else{
			    cout<<(num-a)+1<<" ";
		    }
		    if(num==b){
			    if((b!=a)&&(b!=c)){
			    	cout<<0<<" ";
			    }
			    else{
			    	cout<<1<<" ";
			    }
		    }
		    else{
			    cout<<(num-b)+1<<" ";
		    }
		    if(num==c){
			    if((c!=a)&&(c!=b)){
			    	cout<<0<<endl;
			    }
			    else{
			    	cout<<1<<endl;
			    }
		    }
		    else{
			    cout<<(num-c)+1<<endl;
		    }
		}
	}
	return 0;
}