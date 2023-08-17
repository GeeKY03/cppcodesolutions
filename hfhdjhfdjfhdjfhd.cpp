#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		int array[n];
 		int ref[n];
 		for(int i=0;i<n;i++){
 			int num;
 			cin>>num;
 			array[i]=num;
 			ref[i]=num;
 		}
 		int x = sizeof(ref)/ sizeof(ref[0]);
 		sort(ref, ref+x);
 		for(int i=0;i<n;i++){
 			int count=0;
 			for(int i=0;i<n;i++){
 			    if(array[i]==ref[i]){
 				    count++;
 			    }
 			}
 			if(count==n){
 				if(i==0){
 					cout<<0<<endl;
 				}
 				else{
 					cout<<i+1<<endl;
 				}
 				break;
 			}
 			for(int j=0;j<n-1;j++){
 				if((array[j])>(array[j+1])&&((i+1)%2!=0)&&((j+1)%2!=0)){
 					int temp=array[j];
 					array[j]=array[j+1];
 					array[j+1]=temp;
 				}
 			}
 		}
 	}
 	return 0;
 }