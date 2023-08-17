#include<stdio.h>
#include<math.h>
int main(){
	int num;
	scanf("%d",&num);
	if(num==1){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Sum is %d",a+b);
	}
	else if(num==2){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Product is %d",a*b);
	}
	else if(num==3){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Difference is %d",a-b);
	}
	else if(num==4){
		float a,b;
		scanf("%f%f",&a,&b);
		if(b==0){
			printf("Division is not possible");
		}
		else{
			float div=a/b;
			printf("Quotient is %f",div);
		}
	}
	else if(num==5){
		float a,b;
		scanf("%f%f",&a,&b);
		printf("%f",pow(a,b));
	}
	else if(num==6){
		float a;
		scanf("%f",&a);
		float root=sqrt(a);
		printf("%f",root);
	}
	return 0;
}