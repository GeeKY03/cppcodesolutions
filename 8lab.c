#include<stdio.h>

int main(){
	int arr[]={12,12,121,3,121,56,18,1,5,1,8,4,51,8,4,5,4,85,1,8,4,354,8,63};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}