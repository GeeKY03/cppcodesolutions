#include<stdio.h>

long long binpow(long  a, long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
	int n;
	scanf("%f",&n);
	printf("%f",pow(n,0.5));
	return 0;
}