#include<iostream>
using namespace std;
 int main(){
 	int a1,a2,a3,b1,b2,b3,n;
 	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
 	int x= a1+a2+a3;
 	int y= b1+b2+b3;
 	if(x%5!=0){
 		x=(x/5)+1;
 	}
 	else{
 		x=x/5;
 	}
 	if(y%10!=0){
 		y=(y/10) +1;
 	}
 	else{
 		y=y/10;
 	}
 	if((x+y)<=n){
 		cout<<"YES"<<endl;
 	}
 	else{
 		cout<<"NO"<<endl;
 	}
 	return 0;
 }