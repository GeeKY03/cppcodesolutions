#include<iostream>
using namespace std;
int binary_search(int array[9],int n,int x){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid= (start+end)/2;
		if(array[mid]==x){
			return mid;
		}
		else if(array[mid]<x){
			start=mid+1;
		}
		else if(array[mid]>x){
			end= mid-1;
		}
		else{
			return -1;
		}

	}
}
 int main(){
 	int array[9]={1,2,3,4,5,6,7,8,9};
 	int n,x;
 	cin>>n>>x;
 	return 0;
 }