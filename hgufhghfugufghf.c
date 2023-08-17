#include<stdio.h>
#include<math.h>

int check(int n){
	int count=0;
	for(int i=1;i<(int)sqrt(n);i++){
		if(n%i==0){
			count+=2;
		}
	}
	if(count==2){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){

	int n;
	scanf("%d",&n);
	if((n==1)||(n==0)){
		printf("Neither prime nor composite");
	}
	else{
		printf("%d",check(n));
	}

	return 0;
}