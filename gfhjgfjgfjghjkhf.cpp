#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int d,n;
		cin>>d>>n;
		int sum=0;
		for(int j=0;j<d;j++){
			sum=n*(n+1)/2;
			n=sum;
		}
		cout<<sum<<endl;
	}
	return 0;
}