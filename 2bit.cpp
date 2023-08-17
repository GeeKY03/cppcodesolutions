#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int a,b;
		cin>>a>>b;
		long long int bn[32];
		for(long long int h=a;h<=b;h++){
			for(long long int j=0;j<h;j++){
				bn[j]=h%2;
				h=h/2;
			}
			for(long long int k=h-1;h>=0;h--){
				cout<<bn[i];
			}
		}
	}
	return 0;
}