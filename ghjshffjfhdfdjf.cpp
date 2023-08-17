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
 		int x= sizeof(ref)/ sizeof(ref[0]);
 		sort(ref, ref+x);
 		for(int i=1;i<n;i++){
 			int count=0;
 			for(int k=0;k<n;k++){
 				if(array[k]==ref[k]){
 					count++;
 				}
 			}
 			if(count==n){
 				cout<<i-1<<endl;
 				break;
 			}
 			for(int j=1;j<n;j++){
 				if((j%2==0)&&(i%2==0)){
 					if(array[j-1]>array[j]){
 						int temp=array[j-1];
 						array[j-1]=array[j];
 						array[j]=temp;
 					}
 				}
 				else if((j%2==1)&&(i%2==1)){
 					if(array[j-1]>array[j]){
 						int temp=array[j-1];
 						array[j-1]=array[j];
 						array[j]=temp;
 					}
 				}
 				else{
 					if(array[j-1]>array[j]){
 						int temp=array[j-1];
 						array[j-1]=array[j];
 						array[j]=temp;
 					}    
 				}
 			}
 		}
 	}
 	return 0;
 }