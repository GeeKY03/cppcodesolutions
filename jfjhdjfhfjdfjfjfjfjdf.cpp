#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int inds=0;
		int indl=0;
		int len =s.length();
		int one=0;
		for(int i=0;i<len;i++){
			if(s[i]=='1'){
				one++;
			}
		}
		for(int i=0;i<len;i++){
			if(s[i]=='1'){
				inds=i;
				break;
			}

		}
		for(int i=len-1;i>=0;i--){
			if(s[i]=='1'){
				indl=i;
				break;
			}
		}
		if(one==0){
			cout<<0<<endl;
		}
		else if(len==1){
			cout<<0<<endl;
		}
		else{
			int num=(((indl-inds)-1)-(one-2));
			if(num>=0){
				cout<<num<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		// cout<<(((indl-inds)-1)-(one-2))<<endl;
	}
	return 0;
}