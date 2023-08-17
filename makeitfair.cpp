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
		ll n,x,y;
		int oddc=0;
		int evenc=0;
		cin>>n>>x>>y;
		ll arr[n];
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			if(a&1){
				oddc++;
			}
			else{
				evenc++;
			}
			arr[i]=a;
		}
		sort(arr, arr+n);
		if(arr[0]==arr[n-1]){
			cout<<"YES"<<endl;
		}
		else if((x==1)||(y==1)){
			cout<<"YES"<<endl;
		}
		else{
			if((oddc>0)&&(evenc>0)&&(x%2==0)&&(y%2==0)){
				cout<<"NO"<<endl;
			}
			else if((oddc>0)&&(evenc>0)&&(x%2!=0)&&(y%2!=0)){
				cout<<"NO"<<endl;
			}
			else if((x>arr[n-1])&&(y>arr[n-1])){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}

	return 0;
}