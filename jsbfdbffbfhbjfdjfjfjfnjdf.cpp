
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		char c;
		string s;
		int index=0;
		cin>>n>>c>>s;
		int ctr=0;
		for(int i=0;i<n;i++){
			if(s[i]!=c){
				ctr++;
			}
		}
		if(ctr==0){
			cout<<0<<endl;
		}
		else if(ctr>0){
			for(int i=n;i>0;i--){
				if(s[i-1]==c){
					index=i;
					break;
				}
			}
			if(index>(n/2)){
				cout<<1<<'\n'<<index<<endl;
			}
			else{
				cout<<2<<'\n'<<n<<" "<<n-1<<endl;
			}
		}
	}
	return 0;
}