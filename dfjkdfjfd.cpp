#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int array[n];
	vector <long long int> v;
	for(long long int i=0;i<n;i++){
		long long int num;
		cin>>num;
		array[i]=num;
	}
	long long int count=1;
	for(long long int j=0;j<n-1;j++){
		if(array[j]<=array[j+1]){
			count++;
		}
		else{
			cout<<count<<endl;
			v.push_back(count);
			count=1;
		}
	}
	sort(v.rbegin(), v.rend());
	cout<<v[0]<<endl;
	return 0;
}