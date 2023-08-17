#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int arr[10];
	int max=0;
	int mxi=0;
	int min=101;
	int mini=0;
	srand(time(0));
	for(int i=0;i<10;i++){
		int num=rand()%100;
		arr[i]=num;
		if(num>max){
			max=num;
			mxi=i+1;
		}
		if(num<min){
			min=num;
			mini=i+1;
		}
	}
	for(int i=0;i<10;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n\nMax value is %d  at  %d position.\n",max, mxi);
	printf("Min value is %d  at  %d position\n",min, mini);
	return 0;
}