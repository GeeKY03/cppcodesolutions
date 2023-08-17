#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p,q;
	cin>>p;
	int array1[p];
	for(int i=0;i<p;i++){
		int num;
		cin>>num;
		array1[i]=num;
	}
	cin>>q;
	int array2[q];
	for(int i=0;i<q;i++){
		int num;
		cin>>num;
		array2[i]=num;
	}
	int array[p+q];
	for(int i=0;i<p;i++){
		array[i]=array1[i];
	}
	for(int i=0;i<q;i++){
		array[i+p]=array2[i];
	}
	int x= sizeof(array)/ sizeof(array[0]);
	sort(array, array+x);
	int count=1;
	for(int i=1;i<p+q;i++){
		if(array[i-1]!=array[i]){
			count++;
		}
	}
	if((p==0)&&(q==0)){
		count=0;
	}
	if((count==n)){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}