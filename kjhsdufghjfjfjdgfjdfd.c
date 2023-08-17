#include<stdio.h>
#include<math.h>

// Should be run on an IDE with integrated input and ouput windows
// Won't look good in Sublime CP setup

int main(){
	int num;
	printf("%50cMenu\n\n%40cFor addition enter '1'\n%38cFor multiplication enter '2'\n%39cFor subtraction enter '3'\n%40cFor division enter '4'\n%38cFor exponentiation enter '5'\n%35cFor calculating square root enter '6'\n\n%s\n\n","\n","\n","\n","\n","\n","\n","\n","************************************************************************************************************************");
	printf("Enter your choice: ");
	scanf("%d",&num);
	if(num==1){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The sum is %d.\n",a+b);
	}
	else if(num==2){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The product is %d.\n",a*b);
	}
	else if(num==3){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The difference is %d.\n",a-b);
	}
	else if(num==4){
		float a,b;
		printf("Enter the first value: ");
		scanf("%f",&a);
		printf("Enter the second value: ");
		scanf("%f",&b);
		if(b==0){
			printf("WARNING: Division by zero is not possible.");
		}
		else{
			printf("The Quotient is %f.\n",a/b);
		}
	}
	else if(num==5){
		float a,b;
		printf("Enter the base number: ");
		scanf("%f",&a);
		printf("Enter the exponent: ");
		scanf("%f",&b);
		printf("The exponentiation is %f.\n",pow(a,b));
	}
	else if(num==6){
		float a,b;
		printf("Enter the first value: ");
		scanf("%f",&a);
		printf("The Square root is %f.\n",sqrt(a));
	}
	else{
		printf("%35cWARNING: PLEASE ENTER A VALID OPTION\n\n\n%s%n%n%n","\n","************************************************************************************************************************");
		main();
	}
	return 0;
}