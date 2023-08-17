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
		ll n,k;
		cin>>n>>k;
		vi v;
		for(int i=1;i<=n;i++){
			v.pb(i);
		}
		if(2*k==(n*(n-1))){
			for(int i=n-1;i>=0;i--){
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
		else{
		while(k>=1){
			for(int l=0;l<n-1;l++){
				if(k>0){
					if(v[l+1]>v[l]){
						swap(v[l],v[l+1]);
						k--;
					}
				}
			}
		}
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	    }
		
	}

	return 0;
}