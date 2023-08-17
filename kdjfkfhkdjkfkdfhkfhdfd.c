#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=rand()%2;
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	int c1=0, c2=0, c3=0, c4=0;
	for(int i=0;i<3;i++){
		if(arr[i][i]==0){
			c1++;
		}
		else if(arr[i][i]==1){
			c2++;
		}
	}
	int j=2;
	for(int i=0;i<3;i++){
			if(arr[i][j]==0){
				c3++;
				j--;
			}
			else{
				c4++;
				j--;
			}
	}
	if((c1==3)||(c2==3)){
		printf("\nMajor Array");
	}
	else if((c3==3)||(c4==3)){
		printf("\nMinor Array");
	}
	else{
		printf("\nNothing obtained");
	}


	return 0;
}