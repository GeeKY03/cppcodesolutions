#include<stdio.h>

union sample1{
    int   m;
    float n;
    char  ch;
};

struct sample2{
	int   m;
    float n;
    char  ch;
};

int main(){

	printf("Size of union is %d.\n",sizeof(sample1));
	printf("Size of Structure is %d.",sizeof(sample2));

	return 0;
}