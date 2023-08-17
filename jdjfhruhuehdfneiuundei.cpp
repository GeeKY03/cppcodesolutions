#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		int len =s1.size();
		string s2="";
		for(int i=len-1;i>=0;i++){
			s2=s2+s1[i];
		}
		cout<<s2<<endl;
	}
	return 0;
}