#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int

// int bs(vector<int> v, int start, int end, int target){
// 	while(start<=end){
// 		int mid=(start+end)/2;
// 		if(v[mid]==target){
// 			return mid;
// 		}
// 		else if(v[mid]<target){
// 			start=mid+1;
// 		}
// 		else if(v[mid]>target){
// 			end=mid-1;
// 		}
// 	}
// }

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		vector<int> ope;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.push_back(num);
		}
		
		// cout<<pos<<endl;
	}
	return 0;
}