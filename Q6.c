#include<stdio.h>

int main(){

	// Varun
	int m;
	printf("elements varun has : ");
	scanf("%d",&m);
	int a1[m],i;
	printf("enter elements\n");
	for(i=0;i<m;i++){
		scanf("%d",&a1[i]);
	}

	// Isha
	int n;
	printf("elements isha has : ");
	scanf("%d",&n);
	int a2[n];
	printf("enter elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a2[i]);
	}

	// Array to store the sorted elements after merging
	int a3[m+n];
	int ind=0;

	int vi=0,ii=0;
	while (vi < m && ii < n){
            if (a1[vi] < a2[ii]) {
                a3[ind] = a1[vi];
                vi++;
            }
 
            else {
                a3[ind] = a2[ii];
                ii++;
            }
            ind++;
        }
 
        if (vi >= m){
            while (ii < n){
                a3[ind] = a2[ii];
                ii++;
                ind++;
            }
        }
 
        if (ii >= n){
            while (vi < m){
                a3[ind] = a1[vi];
                vi++;
                ind++;
            }
        }

        // Printing the merged array 
        for(i=0;i<m+n;i++){
        	printf("%d ",a3[i]);
        }

        //This new arrangement is stored in sorted order 
 

	return 0;
}