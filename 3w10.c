#include<stdio.h>

int main(){

	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if((y*z)>x){
		printf("Max no of chocolates that can be boutght is: %d",(x/y));
	}
	else{
		int num=0;
		while(x>=(z*y)){
			num+=z;
			x-=(z-1)*y;
			// printf("%d %d\n",x,num);
		}
		num+=x/y;
		printf("Max no of chocolates that can be boutght is: %d",num);
	}

	return 0;
}