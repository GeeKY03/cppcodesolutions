#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int array[num];
	for(int i=0;i<num;i++){
		int n;
		cin>>n;
		array[i]=n;
	}
	int x= sizeof(array)/ sizeof(array[0]);
	sort(array, array+x);
	for(int j=0;j<num;j++){
		if(array[j]!=array[j-1]){
			cout<<array[j]<<" ";
		}
	}
	return 0;
}