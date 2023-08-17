#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){

	srand(time(0));
	int money=0;
	printf("Enter your money: $");
	scanf("%d",&money);
	int num=0;
	// As the rand()%100 will only ensure the value to be below 100, while loop is necessary to make sure num is gretaer than 0 since the number should be between 0 and 100.
	while(num<=0){
		num=rand()%100;
	}
	int guess=0;
	int count=10; // To make sure while loop runs atmost 10 times
	int flag=0;
	while(count--){
		printf("Enter your guess:\n");
		scanf("%d",&guess);
		if(guess==num){
			flag=1;
			break;
		}
		else if(guess>num){
			printf("Lower your guess\n");
		}
		else if(guess<num){
			printf("Higher your guess\n");
		}
	}
	if(flag==1){
		printf("CONGRATULATIONS, You sucessfully guessed the number.\n");
		printf("Your winning amount is $%d.\n",2*money);
	}
	else{
		printf("\n\nYou have used all your turns.\nBetter luck next time.");
	}

	return 0;
}