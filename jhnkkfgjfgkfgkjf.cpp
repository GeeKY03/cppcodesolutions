#include<iostream>
#include<iomanip>
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int diff1=y3-y2;
		int diff2=y2-y1;
		int diff3=y3-y1;
		long long int num=max(y1,max(y2,y3));
		if((diff1==0)&&(y3==num)){
			long long int x= x3-x2;
			if(x<0){
				x=x*(-1);
			}
			cout<<fixed<<setprecision(8)<<x<<endl;
		}
		else if((diff2==0)&&(y2==num)){
			long long int x= x2-x1;
			if(x<0){
				x=x*(-1);
			}
			cout<<fixed<<setprecision(8)<<x<<endl;
		}
		else if((diff3==0)&&(y1==num)){
			long long int x= x3-x1;
			if(x<0){
				x=x*(-1);
			}
			cout<<fixed<<setprecision(8)<<x<<endl;
		}
		else{
			cout<<fixed<<setprecision(8)<<0<<endl;
		}
	}
	return 0;
}