#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
		string s;
		cin>>s;
		int len = s.size();
		int ab=0;
		int ba=0;
		for(int i=0;i<len;i++){
			if((s[i]==97)&&(s[i+1]==98)){
				ab++;
			}
			else if((s[i]==98)&&(s[i+1]==97)){
				ba++;
			}
		}
		cout<<ab<<" "<<ba<<endl;
		int diff1=ab-ba;
		int diff2= ba-ab;
		if(ab==ba){
			cout<<s<<endl;
		}
		else if(diff1>0){
			for(int l=0;diff1>0;l++){
				
			}
		}
	}
	return 0;
}