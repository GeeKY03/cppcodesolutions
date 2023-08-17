// C++ program to implement Iterative Binary Search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binS(int arr[], int n, int x){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid = end-((end - start)/2);
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int z= sizeof(arr)/ sizeof(arr[0]);
	sort(arr, arr+z);
	int num= binS(arr, n, x);
	if(num==-1){
		cout<<"Element does not exist"<<endl;
	}
	else{
		cout<<"Element is present."<<endl;
	}
	return 0;
}