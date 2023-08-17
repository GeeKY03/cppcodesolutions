#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		string s;
		cin>>a;
		cin>>s;
		vector<int> v;
		for(int i=0;i<s.size();i++){
			for(int j=0;j<26;j++){
				if(s[i]==a[j]){
					v.push_back(j+1);
				}
			}
		}
		long int sum=0;
		if(s.length()>1){
			for(int i=1;i<v.size();i++){
				sum=sum+abs(v[i]-v[i-1]);
			}
			cout<<sum<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}