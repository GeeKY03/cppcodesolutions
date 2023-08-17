#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int num=n;
	for(int i=0;i<n;i++){
		n=n/2;
		if(n>0){
			num=num*n;
		}
		else{
			break;
		}
	}
	cout<<num<<endl;
	return 0;
}