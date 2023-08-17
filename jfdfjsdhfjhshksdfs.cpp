#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
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
		ll n;
		cin>>n;
		vi v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.pb(a);
		}
		int flag=0;
		for(int i=1;i<n;i++){
			if(v[i-1]>v[i]){
				swap(v[i-1],v[i]);
				break;
			}
		}
		for(int i=1;i<n;i++){
			if(v[i-1]>v[i]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}