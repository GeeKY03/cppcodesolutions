#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a1,a2,a3;
		cin>>a1>>a2>>a3;
		long long int b1=a1;
		long long int b2=a2;
		long long int b3=a3;
		long long int m1=((a1+a2+a3)/3);
		long long int m2=((a1+a2+a3)/3)+1;
		long long int d1= a2-m1;
		long long int d2= a2-m2;
		if((d1>0)&&(d2>0)){
			while(d1--){
				a2--;
				a3++;
			}
			while(d2--){
				
			}
		}
		else if(d<0){
			d=d*(-1);
			while(d--){
				a2++;
				a1--;
			}
		}
		long long int ans= (a1+a3)-(2*a2);
		cout<<ans<<endl;
	}
	return 0;
}