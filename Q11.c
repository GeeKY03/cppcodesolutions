#include <stdio.h>
int main() {
	int a[] = {22, 19, 17, 36, 12, 15, 28, 35, 66, 43}; 
    int i, j, n = sizeof(a)/sizeof(int);
    int flag=0;
    for(i = 0; i < n; ++i){
        for(j = 0; j < i; ++j){
            if (a[i] > a[j]){
                a[i] = a[i] + a[j]; 
                a[j] = a[i] - a[j]; 
                a[i] = a[i] - a[j];
            }
        }
    }
    for(i = 0; i < n; ++i) 
     printf("%d ", a[i]); 
    printf("\n");
    return 0;
}