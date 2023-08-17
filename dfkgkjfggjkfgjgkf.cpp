// To demonstrate Iterative binary search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int start, int end, int target){
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			start=mid+1;
		}
		else if(arr[mid]>target){
			end=mid-1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		arr[i]=num;
	}
	int target;
	cin>>target;
	int x= sizeof(arr)/ sizeof(arr[0]);
	sort(arr, arr+x);
	int start=0;
	int end=n-1;
	int result=bs(arr,start, end, target);
	if(result==-1){
		cout<<"Number is not present. "<<endl;
	}
	else{
		cout<<"Number is present. "<<endl;
	}
	return 0;
}