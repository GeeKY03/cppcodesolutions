#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(0));
	char arr[5];
	char alph[]="abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<5;i++){
		arr[i]=alph[rand()%26];
	}
	for(int i=0;i<5;i++){
		printf("%c is stored at %d\n" ,arr[i],&arr[i]);
	}
	return 0;
}