#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int array[4];
	for(int i=0;i<4;i++){
		long long int num;
		cin>>num;
		array[i]=num;
	}
	long long int n= sizeof(array)/sizeof(array[0]);
	sort(array,array+n);
	long long int count=0;
	for(int j=0;j<3;j++){
		if(array[j]==array[j+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}