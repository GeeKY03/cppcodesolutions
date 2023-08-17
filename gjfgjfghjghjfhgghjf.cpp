#include<iostream>
using namespace std;
int main(){
	long long int size, rot, q;
	cin>>size>>rot>>q;
	long long int array[size];
	for(int i=0;i<size;i++){
		long long int num;
		cin>>num;
		array[i]=num;
	}
	for(int i=0;i<q;i++){
		long long int ind;
		cin>>ind;
		long long int x=(size-rot)+ind;
		if(x<0){
			x=x*(-1);
		}
		x=x%size;
		cout<<array[x]<<endl;
	}
	return 0;
}