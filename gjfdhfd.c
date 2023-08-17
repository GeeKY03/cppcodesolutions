#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char array[n][5];
	char arr[]="abcdefghijklmnopqrstuvwxyz";
	srand(time(0));
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
		    char nm=arr[rand()%26];
		    array[i][j]=nm;
	    }
	}

	return 0;
}