#include<stdio.h>

int main(){

	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int even[n/2];
	int odd[(n+1)/2];
	int oddi=0;
	int eveni=0;
	for(int i=0;i<n;i++){
		int a=arr[i];
		if(a&1){
			odd[oddi]=arr[i];
			oddi++;
		}
		else{
			even[eveni]=arr[i];
			eveni++;
		}
	}
	printf("Odd array is: ");
	for(int i=0;i<(n+1)/2;i++){
		printf("%d ",odd[i]);
	}
	printf("\n");
	printf("Even array is: ");
	for(int i=0;i<n/2;i++){
		printf("%d ",even[i]);
	}

	return 0;
}