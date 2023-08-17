#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	double p1=-b/(2*a);
	double p2=((b*b)-(4*a*c));
	if(p2>0){
		double rt=sqrt(p2)/(2*a);
		double r1=p1+rt;
		double r2=p1-rt;
		printf("The roots are :%.2lf   and   %.2lf\n",r1,r2);
	}
	else if(p2==0){
		printf("The roots are %.2lf   and   %.2lf\n",p1,p1);
	}
	else{
		p2*=-1;
		double rt=sqrt(p2)/(2*a);
		double r1=p1;
		printf("The roots are :%.2lf+%.2lfi and %.2lf-%.2lfi\n",r1,rt,r1,rt);
	}
	return 0;
}