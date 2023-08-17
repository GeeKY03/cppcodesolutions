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
		string s2;
		for(int i=len-1;i>=0;i--){
			s2+=s1[i];
		}
		int arr1[len-1];
		int arr2[len-2];
		for(int i=0;i<len-1;i++){
			arr1[i]=abs(s1[i+1]-s1[i]);
		}
		for(int i=0;i<len-1;i++){
			arr2[i]=abs(s2[i+1]-s2[i]);
		}
		int count=0;
		for(int i=0;i<len-1;i++){
			if(arr1[i]==arr2[i]){
				count++;
			}
		}
		if(count==len-1){
			cout<<"Funny"<<endl;
		}
		else{
			cout<<"Not Funny"<<endl;
		}
	}
	return 0;
}