#include<stdio.h>

int main(){
	int arr[]={5,6,4656,6,46,6,64,6,4,46,48,4,6,2,9,5,62,6,5,96,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		printf("%d: %d\n",arr[i],count);
	}

	return 0;
}