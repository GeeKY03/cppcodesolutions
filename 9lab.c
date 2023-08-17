#include<stdio.h>

int main(){
	int n;//no of intgers user wants to input
	scanf("%d",&n);
	int num;//index of this integer needs to be found
	scanf("%d",&num);
	int arr[n];
	int ind=0;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		arr[i]=a;
		if(a==num){
			ind=i;
		}
	}
	printf("Index: %d",ind);

	return 0;
}