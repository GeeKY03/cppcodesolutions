#include<stdio.h>

int main(){

	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sum=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<sz;i++){
		sum+=arr[i];
	}
	printf("%d",sum);

	return 0;
}