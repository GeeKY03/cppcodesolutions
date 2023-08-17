#include<stdio.h>

int main(){

	float a,b,c,min;
	scanf("%f%f%f",&a,&b,&c);
	min=a;
	b<min?min=b:min+=0;
	c<min?min=c:min+=0;
	printf("%f",min);

	return 0;
}


