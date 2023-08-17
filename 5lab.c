#include<stdio.h>
#include<stdlib.h>

int main(){

	int arr[]={3,1,4,2,4,2,6,8,4,4,4,4,8,2,9,5,6,8,5,9,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	float mean=sum/n;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	// for(int i=0;i<n;i++){
	// 	printf("%d ",arr[i]);
	// }
	float median=arr[(n/2)+1];
	//mode=3median-2mean
	float mode=(3*median)-(2*mean);
	printf("Mean: %f\nMedian: %f\nMode: %f",mean,median,mode);
	return 0;
}