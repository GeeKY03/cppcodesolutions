#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int target){
	int start=0;
	int end= n-1;
	while(start<=end){
	    int mid= end- (end-start)/2;
	    if(arr[mid]==target){
	    	return mid;
	    }
	    else if(arr[mid]>target){
	    	end= mid-1;
	    }
	    else{
	    	start=mid+1;
	    }
	}
	return -1;
}
int main(){
	long int n,target;
	cin>>n>>target;
	int arr[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		arr[i]=num;
	}
	int x= sizeof(arr)/ sizeof(arr[0]);
	sort(arr, arr +x);
	int result=binary_search(arr,n,target);
	if(result==-1){
		cout<<"Element is not present"<<endl;
	}
	else{
		cout<<"Element is present"<<endl;
	}
	return 0;
}