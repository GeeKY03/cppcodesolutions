#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int array1[a];
	int array2[b];
	for(int i=0;i<a;i++){
		int num;
		cin>>num;
		array1[i]=num;
	}
	for(int i=0;i<b;i++){
		int num;
		cin>>num;
		array2[i]=num;
	}
	int x= sizeof(array1)/ sizeof(array1[0]);
	int y= sizeof(array2)/ sizeof(array2[0]);
	sort(array1, array1+x);
	sort(array2, array2+y);
	int num=array1[a-1];
	
	return 0;
}