#include<stdio.h>
 
int main(){
    int i,j,n;
    scanf("%d",&n); 
    int count=0;   
    for(i=2;i>=0;i++){
        int c=0;
        if(count==n){
        	break;
        }
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
         
        if(c==2){
            printf("%d ",i);
            count++;
        }
    }
    return 0;
}