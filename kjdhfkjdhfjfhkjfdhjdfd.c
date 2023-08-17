#include<stdio.h>
int main(){

	int t;
	scanf("%d",&t);
	while(t--){
	    float n, sqrt=1;
	    scanf("%f",&n);
	    float x1=n;
	    for(int i=0;i<=(n/2)+1;i++){
		    x1=(sqrt+(n/sqrt))/2;
		    if(sqrt==x1){
		    	break;
		    }
		    else{
		    	sqrt=x1;
		    }
	    }
	    printf("The root is %f\n",sqrt);
	}

	return 0;
}