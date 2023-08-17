#include<stdio.h>

int main(){

	float h , w ;
	scanf("%f%f",&h,&w);
	float bmi=(w/(h*h));
	if(bmi<18.5){
		printf("Your BMI is %f.\nUnderweight.",bmi);
	}
	else if((bmi>=18.5)&&(bmi<25)){
		printf("Your BMI is %f.\nNormal weight.",bmi);
	}
	else if((bmi>=25)&&(bmi<30)){
		printf("Your BMI is %f.\nOverweight.",bmi);
	}
	else{
		printf("Your BMI is %f.\nObesity.",bmi);
	}

	return 0;
}