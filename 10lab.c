#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int mA[n][n]={0};
	int mB[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a;
			scanf("%d",&a);
			mA[i][j]=a;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a;
			scanf("%d",&a);
			mB[i][j]=a;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a=0;
			for(int k=0;k<n;k++){
				a+=(mA[i][k]*mB[k][j]);
			}
			printf("%d ",a);
		}
		printf("\n");
	}

	return 0;
}