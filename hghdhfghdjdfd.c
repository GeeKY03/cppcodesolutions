#include<stdio.h>

int main(){

	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("Enter an odd number");
	}
	else{
		int count=n/2;
		for(int i=0;i<n;i++){
			for(int j=0;j<count;j++){
				printf("%c",' ');
			}
			if(i<=(n/2)){
				for(int j=1;j<=((2*i)+1);j++){
				    printf("%c",'*');
			    }
			}
			else{
			}
			printf("%c",'\n');
		    if(i<(n/2)){
			    count--;
		    }
		    else{
			    count++;
		    }
	    }
	}

	return 0;
}