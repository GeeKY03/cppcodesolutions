#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	char arr[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char a;
	char subst[20];
	gets(subst);
	srand(time(0));
	int num=rand()%21;
	char str[num];
	for(int i=0;i<num;i++){
		char nm=arr[rand()%62];
		str[i]=nm;
		printf("%c",nm);
	}
		return 0;
}