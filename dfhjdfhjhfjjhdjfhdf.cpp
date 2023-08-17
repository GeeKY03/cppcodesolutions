#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	for(long int i=0;i<t;i++){
		long long int x1,p1,x2,p2;
		cin>>x1>>p1>>x2>>p2;
		if(p1==p2){
			if(x1==x2){
				cout<<"="<<endl;
			}
			else if(x1>x2){
				cout<<">"<<endl;
			}
			else if(x1<x2){
				cout<<"<"<<endl;
			}
		}
		else if((x1>x2)&&(p1>p2)){
			cout<<">"<<endl;
		}
		else if((x1<x2)&&(p1<p2)){
			cout<<"<"<<endl;
		}
		else{
			if(p1>p2){
				p1=p1-p2;
				p2=0;
				long double num1 = x1*pow(10,p1);
				long double num2 = x2;
				if(num1>num2){
					cout<<">"<<endl;
				}
				else if(num1<num2){
					cout<<"<"<<endl;
				}
				else{
					cout<<"="<<endl;
				}
			}
			else if(p1<p2){
				p2=p2-p1;
				p1=0;
				long double num1 = x1;
				long double num2 = x2*pow(10,p2);
				if(num1>num2){
					cout<<">"<<endl;
				}
				else if(num1<num2){
					cout<<"<"<<endl;
				}
				else{
					cout<<"="<<endl;
				}
			}
		}
	}
	return 0;
}