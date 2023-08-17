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
	ll n,k;
	cin>>n>>k;
	vi v;
	ll maxs=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		maxs+=a;
		v.pb(a);
	}
	ll sum=0;
	vector<pair<int,int>> vp1;
	int count=0;
	for(int i=0;i<n;i++){
		if(v[i]<=k){
			sum+=v[i];
			count++;
			if(i==n-1){
				vp1.pb({sum,count});
			    sum=0;
			    count=0;
			}
		}
		else{
			vp1.pb({sum,count});
			sum=0;
			count=0;
			if(i==n-1){
				vp1.pb({sum,count});
			    sum=0;
			    count=0;
			}
		}
	}
	sort(vp1.begin(),vp1.end());
	int mini=vp1[0].first;
	int num=vp1[0].second;
	ll ans1=maxs-mini+(num*k);
	ll ans2=n*k;
	ll ans3=maxs;
	ll arr[]={ans1,ans2,ans3};
	sort(arr,arr+3);
	cout<<arr[2]<<endl;



return 0;
}