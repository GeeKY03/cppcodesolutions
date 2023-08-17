// Using newton raphson formula
#include<stdio.h>
int main(){
	long double num;
	scanf("%lf",&num);
	float sqrt=1;
	float x1=num;
	for(int i=0;i<(num+1)/2;i++){
		x1=(x1+(num/x1));
		printf("%f",x1);
	}
	return 0;
}