#include<stdio.h>
#include<math.h>

int calc(){
	printf("%50cMenu\n\n%40cFor addition enter '1'\n%38cFor subtraction enter '2'\n%39cFor multiplication enter '3'\n%40cFor division enter '4'\n%38cFor square root enter '5'\n%41cTo exit enter'6'\n\n%s\n\n","\n","\n","\n","\n","\n","\n","\n","************************************************************************************************************************");
	printf("Enter your choice: ");
	int num;
	scanf("%d",&num);
	if(num==6){
		printf("Good bye");
		return 0;
	}
	else if(num==1){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The sum is %d.\n",a+b);
		calc();
	}
	else if(num==2){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The difference is %d.\n",a=b);
		calc();
	}
	else if(num==3){
		int a,b;
		printf("Enter the first value: ");
		scanf("%d",&a);
		printf("Enter the second value: ");
		scanf("%d",&b);
		printf("The product is %d.\n",a*b);
		calc();
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
		calc();
	}
	else if(num==5){
		float a,b;
		printf("Enter the first value: ");
		scanf("%f",&a);
		printf("The Square root is %f.\n",sqrt(a));
		calc();
	}
	else{
		printf("%35cWARNING: PLEASE ENTER A VALID OPTION\n\n\n%s%n%n%n","\n","************************************************************************************************************************");
		calc();
	}
}

int main(){
	calc();
}