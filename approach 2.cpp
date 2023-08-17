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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll odds =0;
		ll oddc=0;
		vi v;
		ll count=0;
		for(int i=0;i<n;i++){
			if(arr[i]&1){
				odds+=arr[i];
				oddc++;
			}
			else{
				if((odds>0)&&(oddc>1)){
					v.pb(odds);
					count++;
					odds=0;
					oddc=0;
				}
				else if((odds>0)&&(oddc==1)){
					v.pb(odds);
					odds=0;
					oddc=0;
				}
				else{
					v.pb(arr[i]);
				}
			}
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<< " ";
		}
		cout<<count<<endl;
	}

	return 0;
}