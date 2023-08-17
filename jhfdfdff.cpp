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
	vi nums1,nums2;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		nums1.pb(x);
	}
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		nums2.pb(x);
	}
	ll count=0;
	for(int i=1;i<n;i++){
		if((nums1[i]<=nums1[i-1])){
			swap(nums1[i-1],nums2[i-1]);
			count++;
		}
	}
	for(int i=1;i<n;i++){
		if((nums2[i]<=nums2[i-1])){
			swap(nums1[i-1],nums2[i-1]);
			count++;
		}
	}
	cout<<count<<endl;
	for(auto x:nums1){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:nums2){
		cout<<x<<" "; 
	}
	cout<<endl;

	return 0;
}