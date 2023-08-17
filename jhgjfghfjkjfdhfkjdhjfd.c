#include<stdio.h>
int main(){
	int num=0;
	scanf("%d",&num);
	int n=num;
	int count=0;
	int num1=0;
	int num2=0;
	for(int i=1;i>=0;i++){
		if(num==0){
			break;
		}
		else{
			if(i&1){
			    num1+=num%10;
			    count++;
			    num/=10;
		    }
		    else{
			    num2+=num%10;
			    count++;
			    num/=10;
			}
		}
    }
	if(count&1){
		printf("Odd count= %d\n",num1);
		printf("Even count= %d\n",num2);
	}
	else{
		printf("Odd count= %d\n",num2);
		printf("Even count= %d\n",num1);
	}
	return 0;
}