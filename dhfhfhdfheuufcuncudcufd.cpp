#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string small="abcdefghijklmnopqrstuvwxyz";
	string cap="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count=0;
	int len=s.size();
	for(int i=0;i<26;i++){
		for(int j=0;j<len;j++){
			if((s[j]==small[i])||(s[j]==cap[i])){
				count++;
				break;
			}
			else{
				continue;
			}
		}
	}
	if(count==26){
		cout<<"pangram"<<endl;
	}
	else{
		cout<<"not pangram"<<endl;
	}
	return 0;
}