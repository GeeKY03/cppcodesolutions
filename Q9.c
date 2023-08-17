// Recursive method

#include<stdio.h>

void pattern(int n){
	// Base case or Stopping case
	if(n==1){
		printf("1\n");
		return;
	}
	pattern(n-1);
	for(int i=1;i<=n;i++){
		printf("%d",i);
	}
	for(int i=n-1;i>0;i--){
		printf("%d",i);
	}
	printf("\n");
}

int main(){

	int num;
	scanf("%d",&num);
	pattern(num);

	return 0;
}