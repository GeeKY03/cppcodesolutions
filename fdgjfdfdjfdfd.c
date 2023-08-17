#include<stdio.h>

int main(){

	char s[19];
	scanf("%[^\n]%*c",&s);
	printf("%s",s);

	return 0;
}