#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while{
		int n;
		string s;
		cin>>n;
		cin>>s;
		int ctr=0;
		for(int i=0;i<n;i++){
			if((s[i]=='2')||(s[i]=='0')){
				ctr++;
			}
		}
		if(ctr<4){
			cout<<"NO"<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				if((s[i]=='2')&&(s[i+1]=='0')&&(s[i+2]=='2')&&(s[i+3]=='0')){
					cout<<"YES"<<endl;
					break;
				}
			}
		}
	}
	return 0;
}