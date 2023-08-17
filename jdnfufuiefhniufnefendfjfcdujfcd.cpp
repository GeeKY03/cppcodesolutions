#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	long int sereja=0;
	long int dima=0;
	if(n%2==0){
		for(int i=1;i<=n/2;i++){
			if(i%2!=0){
				sereja+=max(array[i-1],array[n-i]);
			}
			else{
				dima+=max(array[i-1], array[n-i]);
			}
		}
	}
	else{
		for(int i=1;i<=((n/2)+1);i++){
			if(i%2!=0){
				sereja+=max(array[i-1],array[n-i]);
			}
			else{
				dima+=max(array[i-1], array[n-i]);
			}
		}
	}
	cout<<sereja<<" "<<dima<<endl;
	return 0;
}