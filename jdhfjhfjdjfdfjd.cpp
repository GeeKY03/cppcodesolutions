#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	long double x1= (b*(-1))+(sqrt((b*b)-((4*a)*c)));
	x1=x1/(2*a);
	long double x2= (b*(-1))-(sqrt((b*b)-((4*a)*c)));
	x2=x2/(2*a);
	if(x1==x2){
		cout<<fixed<<setprecision(6)<<x1<<endl;
	}
	else if(x1>x2){
		cout<<fixed<<setprecision(6)<<x2<<" "<<fixed<<setprecision(6)<<x1<<endl;
	}
	else{
		cout<<fixed<<setprecision(6)<<x1<<" "<<fixed<<setprecision(6)<<x2<<endl;
	}
	return 0;
}