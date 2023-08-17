#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		vector<int> v;
 		vector<int> ref;
 		for(int i=0;i<n;i++){
 			int num;
 			cin>>num;
 			v.push_back(num);
 			ref.push_back(num);
 		}
 		sort(ref.begin(), ref.end());
 		for(int i=1;i<=n;i++){
 			int count=0;
 			for(int k=0;k<n;k++){
 				if(ref[k]==v[k]){
 					count++;
 				}
 			}
 			if(count==n){
 				cout<<i<<endl;
 				break;
 			}
 			for(int j=1;j<=n-1;j++){
 				if(((i%2==0)&&(j%2==0)&&(v[j]>v[j+1]))){
 					int temp=v[i];
 					v[i]=v[i+1];
 					v[i+1]=temp;
 				}
 				else if(((i%2!=0)&&(j%2!=0)&&(v[j]>v[j+1]))){
 					int temp=v[i];
 					v[i]=v[i+1];
 					v[i+1]=temp;
 				}
 			}
 		}
 	}
 	return 0;
 }