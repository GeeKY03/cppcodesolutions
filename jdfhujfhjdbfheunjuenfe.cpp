#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		arr[i]=s[i]-48;
	}
	int count=0;
	for(int i=1;i<n-1;i++){
		if((arr[i]==1)&&(arr[i+1]==0)&&(arr[i-1]==0)){
			i+=2;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}