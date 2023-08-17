#include<stdio.h>
#include<math.h>
int main(){
	int prime=0,comp=0;
	for(int i=0;i>=0;i++){
		int num;
		scanf("%d",&num);
		if(num==-1){
			break;
		}
		else{
			if(num==0){
				continue;
			}
			else if(num<0){
				num*=-1;
				int count=0;
				for(int j=1;j<=(int)sqrt(num);j++){
					if(num%j==0){
						count++;
					}
				}
				(count==1)?prime++:comp++;
			}
			else if(num>0){
				int count=0;
				for(int j=1;j<=(int)sqrt(num);j++){
					if(num%j==0){
						count++;
					}
				}
				(count==1)?prime++:comp++;
			}
		}
	}
	printf("Prime: %d\nComposite: %d",prime,comp);
	return 0;
}