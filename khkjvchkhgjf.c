#include<stdio.h>

int main(){

	int d,m,y;
	scanf("%2d-%2d-%4d",&d,&m,&y);
	printf("%02d-%02d-%04d",d,m,y);

	return 0;
}