#include<stdio.h>

int main(){

	int arr[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		arr[i]=a;
	}
	printf("Elements present in the array are: \n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}

	return 0;
}