#include<stdio.h>

int main(){
	for(int i=0;i<4;i++){
	    char arr[100];
	    scanf("%[^\n]%*c",&arr);
	    if(i%2!=0){
	        printf("%s\n",arr);
	    }
	}

	return 0;
}