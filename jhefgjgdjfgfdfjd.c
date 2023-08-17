#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int flag=1;
	int i=0;
	while(flag==1){
		int num=n-(pow(m,i));
		i++;
		if(num>0){
			printf("%d  ",num);
		}
		else{
		    break;
		}
	}
	return 0;
}