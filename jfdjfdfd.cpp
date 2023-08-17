#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<n-1;k++){
			int temp=0;
			int temp2=0;
			if(array[k]>array[k+1]){
				temp=array[k];
				temp2=array[k+1];
				array[k+1]=array[k];
				array[k]=temp2;
				for(int h=0;h<n;h++){
					cout<<array[h]<<" ";
				}
				cout<<endl;
				// cout<<endl;
				// for(int h=0;h<n;h++){
				// 	cout<<array[h]<<" ";
				// }
				// cout<<endl;
			}
		}
		// cout<<endl;
	}
	// for(int j=0;j<n;j++){
	// 	for(int k=0;k<n-1;k++){
	// 		if(array[k]>array[k+1]){
	// 			int temp=0;
	// 			temp=array[k];
	// 			array[k]=array[k+1];
	// 			array[k+1]=temp;
	// 		}
	// 	}
	// }
	// for(int p=0;p<n;p++){
	// 	cout<<array[p]<<" ";
	// }
	return 0;
}