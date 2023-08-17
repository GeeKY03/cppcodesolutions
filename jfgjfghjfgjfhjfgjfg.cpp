#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	// cout<<s<<endl;
	// cout<<s.unique();
	string s1="";
	long long int count=0;
	string arrs[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	string arrl[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	for(int i=0;i<s.length();i++){
		if((s[i]>64)&&(s[i]<97)){
			s1=s1+arrs[s[i]-65];
		}
		else if(s[i]==32){
			continue;
		}
		else {
			s1=s1+s[i];
		}
	}
	return 0;
}