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
	ll n,m;
	cin>>n>>m;
	vi v;
	for(int i=0;i<m;i++){
		ll a;
		cin>>a;
		v.pb(a);
	}
	ll count=v[0];
	for(int i=1;i<m;i++){
		if(v[i]!=v[i-1]){
			if(v[i]>v[i-1]){
				count+=v[i]-v[i-1];
			}
			else{
				count+=(n-v[i-1])+v[i];
			}
		}
	}
	cout<<count-1<<endl;

	return 0;
}