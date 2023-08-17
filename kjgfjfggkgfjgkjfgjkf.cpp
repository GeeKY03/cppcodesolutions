#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int array[n];
	for(int i=1;i<=n;i++){
		array[i-1]=i;
	}
	for(long long int i=0;i<n;i++){
		for(long long int j=0;j<n-1;j++){
			if(array[j]%2!=0){
				long long int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(long long int z=0;z<n;z++){
		cout<<array[z]<<" ";
	}
	return 0;
}