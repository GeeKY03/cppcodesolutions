#include<stdio.h>

int fact(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}

int main(){

	int n,r,ncr;
	scanf("%d",&n);
	scanf("%d",&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("%d",ncr);

	return 0;
}