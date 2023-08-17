#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;   
		long int count=0;
		for(int i=0;i<n;i++){
			long long int num;
			cin>>num;
			v.push_back(num);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((__gcd(v[i],(2*v[j]))>1)||(__gcd(v[j],(2*v[i])))>1){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}