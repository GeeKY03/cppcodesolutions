#include<stdio.h>
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	if(b==0){
		printf("Sum is %f\n",a+b);
	    printf("Difference is %f\n",a-b);
	    printf("Product is %f\n",a*b);
		printf("Division is not possible");
	}
	else{
	    printf("Sum is %f\n",a+b);
	    printf("Difference is %f\n",a-b);
	    printf("Product is %f\n",a*b);
	    printf("Quotient is %f\n",a/b );
	}
	return 0;
}