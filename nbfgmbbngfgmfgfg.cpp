#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll sum=0;
	ll m=1000000007;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				sum+=arr[i];
				sum=sum%m;
				sum+=arr[j];
				sum=sum%m;
				sum+=arr[k];
				sum=sum%m;
				sum-=(((arr[i]^arr[j])%m)^arr[k])%m;
				sum=sum%m;
			}
		}
	}
	cout<<sum<<endl;

	return 0;
}