#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len =s.length();
	int num=sqrt(len);
	int count=0;
	int count1=0;
	if(num*num==len){
		for(int i=0;i<num;i++){
			for(int j=count;j<len;j+=num){
				cout<<s[j];
			}
			count++;
			cout<<" ";
		}
	}
	else{
		for(int i=0;i<num+1;i++){
			for(int j=count1;j<len;j+=(num+1)){
				cout<<s[j];
			}
			count1++;
			cout<<" ";
		}
	}
	return 0;
}