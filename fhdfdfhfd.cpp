#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	string S;
	cin>>S;
	s1=s1+s2;
	int len1 = s1.length();
	len1=len1 + s2.length();
	int len2 = S.length();
	cout<<len1<<" "<<len2<<endl;
	if(len1!=len2){
		cout<<"NO"<<endl;
	}
	else{
		string array1[len1];
	    string array2[len2];
	    for(int i=0;i<len1;i++){
		    array1[i]=s1[i];
	    }
	    for(int j=0;j<len2;j++){
	    	array2[j]=S[j];
	    }
	    int x1= sizeof(array1)/ sizeof(array1[0]);
	    int x2= sizeof(array2)/ sizeof(array2[0]);
	    sort(array1, array1+x1);
	    sort(array2, array2+x2);
	    for(int k=0;k<len1;k++){
	    	cout<<array1[k];
	    }
	    cout<<endl;
	    for(int l=0;l<len2;l++){
	    	cout<<array2[l];
	    }
	}
}    