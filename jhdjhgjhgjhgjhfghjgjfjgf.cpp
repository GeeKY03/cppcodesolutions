#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int nums[]={1,100,200,200,200,200,300,300,300,300,300,30,300,300,300,     1,100,100,100,100};
 	int key=1;
 	int n=sizeof(nums)/ sizeof(nums[0]);
 	int pos=0;
 	int target=0;
 	for(int i=0;i<n;i++){
 		if(nums[i]==key){
 			target=nums[i+1];
 			pos=i+1;
 			break;
 		}
 	}
 	vector<int> v;
 	for(int i=pos;i<n;i++){
 		v.push_back(nums[i]);
 	}
 	sort(v.begin(),v.end());
 	// for(int i=0;i<v.size();i++){
 	// 	cout<<v[i]<< " ";
 	// }
 	// cout<<endl;
 	// cout<<target<<" "<<pos<<endl;
 	int count=1;
 	vector<int> counts;
 	for(int i=0;i<v.size();i++){
 		if(v[i]==v[i+1]){
 			count++;
 		}
 		else{
 			counts.push_back(count);
 			count=1;
 		}
 	}
 	// cout<<endl;
 	// for(int i=0;i<counts.size();i++){
 	// 	cout<<counts[i]<<" ";
 	// }
 	sort(counts.begin(),counts.end());
 	// for(int i=0;i<counts.size();i++){
 	// 	cout<<counts[i]<<" ";
 	// }
 	int max=counts[counts.size()-1];
 	// cout<<max<<endl;
 	count=1;
 	int req=0;
 	for(int i=0;i<v.size();i++){
 		if(v[i]==v[i+1]){
 			count++;
 		}
 		else{
 			count=1;
 		}
 		if(count==max){
 			cout<<count<<endl;
 			req=v[i];
 		}
 	}
 	cout<<req<<endl;
 	return 0;
 }