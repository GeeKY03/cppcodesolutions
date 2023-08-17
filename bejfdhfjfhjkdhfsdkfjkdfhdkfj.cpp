#include<bits/stdc++.h>
using namespace std;

void sortearr(int array[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(array[j]>array[j+1]){
				swap(array[j], array[j+1]);
				// int temp=array[j];
				// array[j]=array[j+1];
				// array[j+1]=temp;
			}
		}
    }
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sortearr(arr , n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}