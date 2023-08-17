#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int array[a];
	for(int i=0;i<a;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	int n = sizeof(array)/ sizeof (array[0]);
	sort(array, array+n);
	for(int j=0;j<a;j++){
		cout<<array[j]<<" ";
	}
	return 0;
}