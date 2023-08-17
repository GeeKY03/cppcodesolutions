#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	char str[63]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	srand(time(0));
	for(int i=1;i<63;i++){
		int num=rand()%63;
		printf("%c",str[num]);
	}
	// char arr[]="abc";
	// printf("%d",strstr(str,arr));

	return 0;
}