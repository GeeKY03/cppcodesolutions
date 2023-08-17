#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
		    printf("%c",nm);
	    }
	    printf("\n");
	}

	int arr1[n];
	for(int i=0;i<n;i++){
		arr1[i]=i;
	}

	for(int k=0;k<n;k++){
		for(int i=1;i<n;i++){
			for(int j=0;j<5;j++){
				if(array[arr1[i-1]][j]>array[arr1[i]][j]){
					char temp=arr1[i];
					arr1[i]=arr1[i-1];
					arr1[i-1]=temp;
					break;
				}
				else{
					break;
				}
			}
		}
	}




	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<5;j++){
	// 		printf("%c",array[i][j]);
	// 	}
	// 	printf("\n");
	// }






	// printf("\n");

	// for(int k=0;k<n;k++){
	// 	for(int i=1;i<n;i++){
	// 		for(int j=0;j<5;j++){
	// 			if(array[i-1][j]>array[i][j]){
	// 				int temp=arr1[i-1];
	// 		    	arr1[i-1]=arr1[i];
	// 		    	arr1[i]=temp;
	// 		    	break;
	// 			}
	// 			else{
	// 				break;
	// 			}
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<5;j++){
	// 		printf("%c",array[i][j]);
	// 	}
	// 	printf("\n");
	// }

	int count=0;
	while(count<n){
		for(int i=0;i<n;i++){
			if(arr1[i]==count){
				for(int j=0;j<5;j++){
					printf("%c",array[i][j]);
				}
				printf(" ");
				count++;
			}
		}
	}


	return 0;
}