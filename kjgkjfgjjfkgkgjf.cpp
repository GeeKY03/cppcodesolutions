#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a1,a2,a3;
		cin>>a1>>a2>>a3;
		long long int m=0;
		if((a1+a2+a3)%3>(3/2)){
			m=(a1+a2+a3+1)/3;
		}
		else{
			m=(a1+a2+a3)/3;
		}
		long long int d= a2-m;
		if(d>0){
			while(d--){
				a2--;
				a3++;
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
		if(ans<0){
			ans=ans*(-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}