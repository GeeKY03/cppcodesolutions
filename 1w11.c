#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int arr[5];
	srand(time(0));
	for(int i=0;i<5;i++){
		arr[i]=rand()%10;
	}
	for(int i=0;i<5;i++){
		printf("%d  %d  %s\n",arr[i],&arr[i],&arr[i]);
	}


	return 0;
}