#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len =s.size();
	for(int i=0;i<(len/2);i++){
		for(int j=0;j<len-1;j++){
			if(s[j]==s[j+1]){
				s[j]='0';
				s[j+1]='0';
			}
			string s1=s;
			s="";
			for(int i=0;i<s1.size();i++){
				if(s1[i]==48){
					continue;
				}
				else{
					s+=s1[i];
				}
			}
		}
	}
	if(s.size()==0){
		cout<<"Empty String"<<endl;
	}
	else{
		cout<<s<<endl;
	}
	return 0;
}
