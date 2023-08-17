#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

	char arr[10][10];
	char array[]="abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
		    char nm=array[rand()%26];
		    arr[i][j]=nm;
	    }
	}
	printf("Random strings stored in array are: \n");
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%c",arr[i][j]);
	    }
	    printf("\n");
	}
	printf("\n");
	printf("Random strings which contain a character more than two times are: \n");
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			int flag=0;
			char a=arr[i][j];
			int count=0;
			for(int k=0;k<10;k++){
				if(arr[i][k]==a){
					count++;
				}
			}
			if(count>2){
				flag=1;
				for(int k=0;k<10;k++){
					printf("%c",arr[i][k]);
				}
				printf("\n");
			}
			if(flag==1){
				break;
			}
	    }
	}

	return 0;
}