#include<stdio.h>
#include<string.h>

int sumAscii(char arr[]){
	int length=strlen(arr);
	int sum=0;
	for(int i=0;i<length;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){

	char arr[100];
	scanf("%s",&arr);
	int ans=sumAscii(arr);
	printf("%d",ans);

	return 0;
}