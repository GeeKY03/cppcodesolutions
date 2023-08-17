#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len =s.size();
		int counter=0;
		for(int i=0;i<len;i++){
			int count=0;
			for(int l=1;l<s.size();l++){
				if(s[l]!=s[l-1]){
					count++;
				}
			}
			if(count==0){
				if(i==0){
					cout<<"NET"<<endl;
					break;
				}
				else if(i%2!=0){
					cout<<"DA"<<endl;
					break;
				}
				else{
					cout<<"NET"<<endl;
					break;
				}
			}
			string s1;
			for(int j=1;j<s.size();j++){
				if(s[j]!=s[j-1]){
					s[j]='-';
					s[j-1]='-';
					break;
				}
			}
			s1=s;
			s="";
			for(int k=0;k<s1.size();k++){
				if(s1[k]!='-'){
					s+=s1[k];
				}
			}
			s1="";

		}
	}
	return 0;
}