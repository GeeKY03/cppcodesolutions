#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s1;
		for(int j=i;j<n;j++){
			s1+=s[j];
			v.push_back(s1);
		}
	}
	int c=0;
	int count=1;
	for(int i=0;i<v.size();i++){
		string x=v[i];
		vector<string> v2;
		for(int j=0;j<x.length();j++){
			v2.push_back(x[j]);
		}
		sort(v2.begin(),v2.end());
		for(int k=1;k<v2.size();k++){
			if(v2[i]==v2[i-1]){
				count++;
			}
			else{
				if(count>=k){
					c++;
				}
				else{
					count=0;
				}
			}
		}
	}
	cout<<c<<endl;
	return 0;
}