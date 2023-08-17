#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int n=9;
	int array[9]={1,2,3,4,5,6,7,8,9};
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid= (start+end)/2;
		if(array[mid]==x){
			cout<<mid<<endl;
		}
		else if(array[mid]>x){
			end= mid-1;
		}
		else if(array[mid]<x){
			start=mid+1;
		}
	}
	return 0;
}