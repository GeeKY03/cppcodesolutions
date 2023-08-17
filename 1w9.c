#include<stdio.h>

int main(){
	char arr[50];
	gets(arr);
	int i;
	for(i=0;i<50;i++){
		if(arr[i]==00){
			break;
		}
		// printf("%c",arr[i]);
	}
	int len=i;
	int count=0;
	for(int j=0;j<((2*len)-1);j++){
		if(j<len){
			count++;
		}
		else{
			count--;
		}
		for(int k=0;k<count;k++){
			printf("%c",arr[k]);
		}
		printf("\n");
	}

	return 0;
}