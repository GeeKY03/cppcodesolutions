#include<stdio.h>

int main(){

	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		arr[i]=a;
	}
	printf("0 ");
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			printf("%d ",sum);
		}
	}

	return 0;
}