#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll moves=0;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			moves+=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
	}
	cout<<moves<<endl;


	return 0;
}