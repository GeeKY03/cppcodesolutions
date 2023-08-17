#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len =s.length();
		for(int i=0;i<len;i++){
			int count=0;
			for(int l=0;l<s.size();l++){
				if((s[l]=='1')&&(s[l+1]=='0')){
					count++;
				}
				else if((s[l+1]=='1')&&(s[l]=='0')){
					count++;
				}
			}
			if((count==0)&&(i==0)){
				cout<<"NET"<<endl;
				break;
			}
			else{
				if(i%2!=0){
					cout<<"DA"<<endl;
					break;
				}
				else{
					cout<<"NET"<<endl;
					break;
				}
			}
			for(int j=0;j<s.size();j++){
				if((s[j]=='1')&&(s[j+1]=='0')){
					s[j]='x';
					s[j+1]='x';
				}
				else if((s[j+1]=='1')&&(s[j]=='0')){
					s[j]='x';
					s[j+1]='x';
				}
			}
			cout<<s<<endl;
			cout<<s<<" ";
			string s1;
			s1=s;
			s="";
			for(int k=0;k<s1.size();k++){
				if(s1[k]=='x'){
					continue;
				}
				else{
					s=s+s1[k];
				}
			}
			cout<<s<<endl;
		}
	}
	return 0;
}