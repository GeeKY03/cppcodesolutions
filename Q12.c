#include<stdio.h>

void printRow(int n){
	if(n==1){
		printf("*");
		return;
	}
	printRow(n-1);
	printf("*");
}

void pattern(int n){
	if(n==1){
		printf("*\n");
		return ;
	}
	pattern(n-1);
	printRow(n);
	printf("\n");
}

int main(){

	int num;
	scanf("%d",&num);
	pattern(num);

	return 0;
}