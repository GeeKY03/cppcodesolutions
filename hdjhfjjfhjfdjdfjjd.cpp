#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> odd;
		vector<int> even;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num%2==0){
				even.push_back(num);
			}
			else{
				odd.push_back(num);
			}
		}
		for(int i=0;i<odd.size();i++){
			cout<<odd[i]<<" ";
		}
		for(int i=0;i<even.size();i++){
			cout<<even[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}