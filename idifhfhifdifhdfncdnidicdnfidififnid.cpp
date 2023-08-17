#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr1[n];
		// int arr2[n];
		for(int i=0;i<n;i++){
			long int num;
			cin>>num;
			arr1[i]=num;
			// arr2[i]=num;
		}
		int ctr=1;
		// sort(arr2,arr2+n);
		// for(int i=0;i<n;i++){
		// 	cout<<arr2[i]<<" ";
		// }
		// cout<<endl;
		for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
				if((arr1[j-1]>arr1[j])&&((arr1[j]+arr1[j-1])%2!=0)){
					swap(arr1[j], arr1[j-1]);
					if((j>1)&&(arr1[j]<arr1[j-2])&&((arr1[j]+arr1[j-2])%2!=0)){
						swap(arr1[j],arr1[j-2]);
					}
				}
			}
			ctr=1;
			for(int k=0;k<n-1;k++){
				if(arr1[k]<=arr1[k+1]){
					ctr++;
				}
			}
			if(ctr==n){
				cout<<"Yes"<<endl;
				break;
			}
		}
		// int ctr=1;
		// for(int i=0;i<n-1;i++){
		// 	if(arr1[i]<=arr1[i+1]){
		// 		ctr++;
		// 	}
		// }
		// for(int i=0;i<n;i++){
		// 	if(arr1[i]==arr2[i]){
		// 		ctr++;
		// 	}
		// }
		// cout<<ctr<<endl;
		if(ctr!=n){
			cout<<"No"<<endl;
		}
	}
	return 0;
}