#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(0));
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j]=rand()%10;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("a%d%d is %d and strored at %d\n",i+1,j+1,arr[i][j],&arr[i][j]);
		}
	}


	return 0;
}