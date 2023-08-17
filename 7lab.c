#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c=0;
	printf("%d %d ",a,b);
	int count=0;
	for(int i=0;i>=0;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		count++;
		if(count==n-2){
			break;
		}
	}
	return 0;
}