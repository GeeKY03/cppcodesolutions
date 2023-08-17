#include<stdio.h>

// Function to swap two numbers will be used later in the program
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){

	int m;
	printf("Enter the number of boxes: ");
	scanf("%d",&m);


	for(int i=0;i<m;i++){
		int weight;
		scanf("%d",&weight);
		arr[i][0]=weight;
		arr[i][1]=i+1;
	}

	for(int l=0;l<m;l++){
		for(int i=1;i<m;i++){
			for(int j=0;j<2;j++){
				if(arr[i][0]<arr[i-1][0]){
					swap(&arr[i][0],&arr[i-1][0]);
					swap(&arr[i][1],&arr[i-1][1]);
				}
			}
		}
	}

	printf("Box numbers with weight %d are:\n%d ",arr[0][0],arr[0][1]);
	for(int i=1;i<m;i++){
		if(arr[i][0]==arr[i-1][0]){
			printf("%d ",arr[i][1]);
		}
		else{
			printf("\nBox numbers with weight %d are:\n%d ",arr[i][0],arr[i][1]);
		}
	}


	return 0;
}