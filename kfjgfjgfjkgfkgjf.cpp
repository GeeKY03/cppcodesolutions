#include<iostream>
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int n,x;
 		cin>>n>>x;
 		int array[n];
 		int odd=0;
 		int even =0;
 		for(int i=0;i<n;i++){
 			int num;
 			cin>>num;
 			array[i]=num;
 			if(num%2==0){
 				even++;
 			}
 			else{
 				odd++;
 			}
 		}
 		if(odd==0){
 			cout<<"NO"<<endl;
 		}
 		else if((x%2==0)&&(even=0)||((x%2==0)&&(odd=0))){
 			cout<<"NO"<<endl;
 		}
 		else{
 			cout<<"YES"<<endl;
 		}
 	}
 	return 0;
 }