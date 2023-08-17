#include<bits/stdc++.h>
using namespace std;
#define pb push_back
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
 				if(v[j]>v[j+1]){
 					if(v[j]>(2*v[j+1])){
 						double mid= (v[j]+v[j+1])/2;
 						if(mid-(int)mid>=0.5){
 							mid=int(mid)+1;
 						}
 						else{
 							mid=int(mid);
 						}
 						v.insert(v.begin()+j,mid);
 						break;
 					}
 				}
 				else if(v[j+1]>v[j]){
 					if(v[j+1]>(2*v[j])){
 						double mid= (v[j]+v[j+1])/2;
 						if(mid-(int)mid>=0.5){
 							mid=int(mid)+1;
 						}
 						else{
 							mid=int(mid);
 						}
 						v.insert(v.begin()+j+1,mid);
 						break;
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