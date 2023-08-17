#include<stdio.h>
int main()
{
    int n,i;
    // printf("\n Enter how many strings? ");
    scanf("%d",&n);
    char str[n][50];
    for(i=0;i<n;i++){
        // printf("\n Enter String%d : ",i+1);
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++){
    		printf("%s\n",str[i]);
    }
   return 0;
}