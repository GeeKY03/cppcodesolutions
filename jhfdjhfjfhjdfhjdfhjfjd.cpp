#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	long int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int x,y,n;
		cin>>x>>y>>n;
		for(int i=n;i>=0;i--){
			if(i%x==y){
				cout<<setprecision(9)<<i<<endl;
				break;
			}
			else{
				continue;
			}
		}
	}
	return 0;
}