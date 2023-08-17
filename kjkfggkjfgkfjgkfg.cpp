#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		vector<int> v;
 		for(int i=0;i<n;i++){
 			int num;
 			cin>>num;
 			v.pb(num);
 		}
 		for(int i=0;i<n;i++){
 			for(int j=0;j<n-1;j++){
 				if(v[j+1]>v[j]){
 					if(v[j+1]>(2*v[j])){
 						int x=(v[j+1]+v[j])/2;
 						if((2*x)>v[j+1]){
 							x--;
 							v.insert(v.begin()+j,x);
 						}
 						else{
 							v.insert(v.begin()+j,x);
 						}
 					}
 				}
 				else if(v[j]>v[j+1]){
 					if(v[j]>(2*v[j+1])){
 						int x=(v[j+1]+v[j])/2;
 						if((2*x)>v[j]){
 							x--;
 							v.insert(v.begin()+j,x);
 						}
 						else{
 							v.insert(v.begin()+j,x);
 						}
 					}
 				}
 			}
 		}
 		for(int i=0;i<v.size();i++){
 			cout<<v[i]<<" ";
 		}
 		cout<<endl;
 	}
 	return 0;
 }