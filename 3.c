#include<stdio.h>
float roundoff(float n){
	float val=(int)(n*100+0.5);
	return (float)(val/100);
}

int main(){

	float n;
	scanf("%f",&n);
	printf("%.2f",roundoff(n));


	return 0;
}