#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string x,y,s;
	cin>>x>>y>>s;
	x=x+y;
	int len1 = x.length();
	int len2 = s.length();
	string array1[len1];
	string array2[len2];
	if(len1==len2){
		for(int i=0;i<len1;i++){
			array1[i]=x[i];
		}
		int x= sizeof(array1)/ sizeof(array1[0]);
		sort(array1, array1+x);
		for(int k=0;k<len2;k++){
			array2[k]=s[k];
		}
		sort(array2, array2+x);
		long long int count=0;
		for(int j=0;j<len1;j++){
			if(array1[j]==array2[j]){
				count++;
			}
			else{
				continue;
			}
		}
		if(count==len2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}