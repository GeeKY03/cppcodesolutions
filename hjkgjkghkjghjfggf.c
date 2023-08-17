#include<stdio.h>

int main(){
	char gender;
	float bal, age;
	scanf("%f%f",&bal,&age);
	scanf("%c",&gender);
	if(age>=60){
		if(bal>50000){
			float bonus=((bal*10)/100);
			printf("%f",bonus);
		}
		else{
			float bonus=((bal*8)/100);
			printf("%f",bonus);
		}
	}
	else if((gender=='F')||(gender=='f')){
		if(bal>=10000){
			float bonus=((bal*5)/100);
			printf("%f",bonus);
		}
		else{
			float bonus=((bal*2)/100);
		}
	}
	else{
		float bonus=((bal*2)/100);
		printf("%f",bonus);
	}

	return 0;
}