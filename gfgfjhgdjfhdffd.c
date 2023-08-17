#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char arr[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char a;
	scanf("%c",&a);
	srand(time(0));
	int num=rand()%21;
	char str[num];
	for(int i=0;i<num;i++){
		char nm=arr[rand()%62];
		str[i]=nm;
		printf("%c",nm);
	}
	// printf("\n");
	int flag=0;
	for(int i=0;i<num;i++){
		// printf("%c",str[i]);
		if(str[i]==a){
			flag=1;
		}
	}
	printf("\n");
	(flag==1)?printf("YES"):printf("NO");
	return 0;
}