#include<iostream>
using namespace std;
int main(){
	long long int size, rot, q;
	cin>>size>>rot>>q;
	long long int array[size]; 
	for(long long int i=0;i<size;i++){
		long long int num;
		cin>>num;
		array[i]=num;
	} 
	int x;
	array[x]=20372;
	cout<<x<<endl;
	return 0;
}