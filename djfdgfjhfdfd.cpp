#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    if (n==1){
        printf("*\n");
    }
    else{
        printPattern(n-1){
            if (n==1){
                printf("*\n");
            }
            else{
                for(int i=0;i<(2*n-1);i++){
                    printf("*");
                }
                printf("\n");
            }
                }
        for(int i=0;i<(2*n-1);i++){
            printf("*");
        }
        printf("\n");
    }


}

int main(){
    printPattern(4);
    return 0;
}
