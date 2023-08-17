// To demonstrate Recursive binary search
#include<bits/stdc++.h>
using namespace std;

int bs(int array[], int start, int end, int target){
	while(start<=end){
		int mid= (start+end)/2;
		if(array[mid]==target){
			return mid;
		}
		else if(array[mid]<target){
			return bs(array, mid+1, end , target);
		}
		else if(array[mid]>target){
			return bs(array, start, mid-1, target);
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	int target;
	cin>>target;
	int x =sizeof(array)/ sizeof(array[0]);
	sort(array, array+x);
	int start=0;
	int end=n-1;
	int result=bs(array, start, end, target);
	if(result==-1){
		cout<<"Number is not present."<<endl;
	}
	else{
		cout<<"Number is present at index: "<<result<<endl;
	}
	return 0;
}