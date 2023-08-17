#include<bits/stdc++.h>
using namespace std;

// int bs(int price[], int start, int end, int min){
// 	while(start<=end){
// 		int mid=(start+end)/2;
// 		if(price[mid]==min){
// 			return  mid;
// 		}
// 		else if(price[mid]<min){
// 			start=mid+1;
// 		}
// 		else if(price[mid]>min){

// 		}
// 	}
// }

int main(){
	int n;
	cin>>n;
	int req[n];
	int price[n];
	int min=100;
	int minind=0;
	for(int i=0;i<n;i++){
		int need;
		int paisa;
		cin>>need;
		cin>>paisa;
		req[i]=need;
		price[i]=paisa;
		if(paisa<min){
			min=paisa;
			minind=i;
		}
	}
	cout<<min<<" "<<minind<<endl;
	int cost=0;
	for(int i=0;i<n;i++){
		if(i<minind){
			cost+=price[i]*req[i];
		}
		else{
			cost+=req[i]*min;
		}
	}
	// for(int i=0;i<n;i++){
	// 	cout<<req[i]<<" ";
	// 	cout<<price[i]<<endl;;
	// }
	// cout<<min<< " "<<minind<<endl;
	// int cost=0;
	// int count=1;
	// for(int i=0;i<n;i++){
	// }
	cout<<cost<<endl;
	return 0;
}