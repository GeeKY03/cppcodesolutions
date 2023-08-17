#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

bool ifsorted(int arr[],int n){
	if(n==1){
		return true;
	}
	bool restarr=ifsorted(arr+1,n-1);
	return ((arr[0]<arr[1])&&(restarr));
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int arr[]={1,3,2,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<ifsorted(arr,n)<<endl;

	return 0;
}