#include<stdio.h>

int main(){

	char name[30];
	int id;
	int age;
	printf("Enter your name: ");
	gets(name);
	printf("Enter your ID: ");
	scanf("%d",&id);
	printf("Enter your Age: ");
	scanf("%d",&age);
	if(age<=0){
		printf("Mr/Ms. %s, ",name);
		printf("Please enter valid details.\n");
	}
	else if(age<=5){
		printf("Mr/Ms. %s, ",name);
		printf("Your ticket price is 25 Rupees.\n");
	}
	else if((age>5)&&(age<10)){
		printf("Mr/Ms. %s, ",name);
		printf("Your ticket price is 35 Rupees.\n");
	}
	else if((age>=10)&&(age<18)){
		printf("Mr/Ms. %s, ",name);
		printf("Your ticket price is 50 Rupees.\n");
	}
	else{
		printf("Mr/Ms. %s, ",name);
		printf("Your ticket price is 70 Rupees.\n");
	}

	return 0;
}