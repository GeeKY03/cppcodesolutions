#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	char arr[63]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char a;
	char subst[20];
	gets(subst);
	srand(time(0));
	int num=rand()%21;
	char str[num];
	for(int i=0;i<num;i++){
		char nm=arr[rand()%62];
		str[i]=nm;
	}
	printf("%s",str);
	printf("\n");
	int flag=0;
	if(strstr(str,subst)!=0){
		flag=1;
	}
	(flag==1)?printf("YES\n%s is a substring.",subst):printf("NO\n%s is a not a substring.",subst);
	return 0;
}