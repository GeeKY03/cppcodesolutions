#include<stdio.h>
int main(){
	float y=98.7654;
	printf("%7.4f\n" , y);
    printf("%-7.4f\n" , y);
    printf("%f\n", y);
    printf("%10.2e\n", y);
    printf("%11.4e\n", y);
    printf("%-10.2e\n", y);
    printf("%e\n", y);

	return 0;
}