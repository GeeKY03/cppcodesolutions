#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			ll num;
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		ll red=0;
		ll blue=v[0];
		int end=0;
		if(n%2==0){
			end=(n-1)/2;
		}
		else{
			end=n/2;
		}
		int count=0;
		for(int i=1;i<=end;i++){
			red+=v[n-i];
			blue+=v[i];
			if(red>blue){
				count++;
				break;
			}
		}
		if(count>0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}