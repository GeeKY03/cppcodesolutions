#include<stdio.h>
#include<math.h>

int main(){

	int a;
	double b;
	printf("Enter your choice: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%lf",&b);
	double val =3.14159265/180;
	double num= b*val;
	if(a==1){
		printf("Sine: %lf",sin(num));
	}
	else if(a==2){
		printf("Cosine: %lf",cos(num));
	}
	else{
		if(b==90){
			printf("Undefined");
		}
		else{
			printf("Tan: %lf",tan(num));
		}
	}
	return 0;
}