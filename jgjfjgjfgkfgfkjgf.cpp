#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int arr[n];
		for (long int k=0;k<n;k++){
			long long int x;
			cin>>x;
			arr[k]=x;
		}
		vector<long long int> v;
		for(long long int i=0;i<n-1;i++){
			for(long long int j=i+1;j<n;j++){
				long long int num=arr[i]*arr[j];
				v.push_back(num);
			}
		}
		sort(v.begin(), v.end());
		cout<<v[v.size()-1]<<endl;
	}
	return 0;
}