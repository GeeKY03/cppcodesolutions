#include<stdio.h>

// User defined function to find the minnimum of two values
int min(int* a, int* b){
	if(*b>*a){
		return *a;
	}
	else{
		return *b;
	}
}

int main(){

	//Since we can choose price and quantity as per our choice, let's use an arbitrary data with special cases
	
	// Aman's inventory
	int quan[]={10,23,20,15}; // Quantities of {a,b,c,d} in inventory
	int price[]={7,11,26,12};

	// Let quantites of {a,b,c,d} bought be
	int arr[]={12,10,21,6};

	int amount=0;	
	int sz=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<sz;i++){
		// It is necessary to us min() because it might be possible that no of items 
		//ordred may be more than available in inventory
		amount+=(min(&arr[i],&quan[i])*price[i]);
	}
	printf("The Amount that needs to be paid is: %d Rupees.",amount);

	return 0;
}