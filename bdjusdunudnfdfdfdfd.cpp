#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int len =s.length();
	for(int i=0;i<len;i++){
		int count=0;
		for(int j=0;j<len;j++){
			if((s[j]=='x')&&(s[j+1]=='x')&&(s[j+2]=='x')){
				count++;
				break;
			}
		}
		if(count==0){
			break;
		}
		else{
			for(int k=0;k<s.size();k++){
				string s1;
				int count1=0;
				if((s[k]=='x')&&(s[k+1]=='x')&&(s[k+2]=='x')&&(count1=0)){
					count1++;
				}
				else{
					s1=s1+s[k];
				}
			}
		}
	}
	return 0;
}