#include<iostream>
using namespace std;
int main(){
	 int size;
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j+1]=array[j];
				array[j+1]=temp;
			}
		}
	}
	for(int l=0;l<size;l++){
					cout<<array[l]<<" ";
				}
	return 0;
}