#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array1[n];
	// int array2[n];
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		array1[i]=num;
	}
	for(int j=0;j<n;j++){
		cout<<array1[array1[j]-1]<<endl;
	}
	return 0;
}