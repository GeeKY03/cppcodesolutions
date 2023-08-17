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
		for(int i=0;i<k;i++){
			next_permutation(v.begin(),v.end());
			for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
		}
		
	}
	return 0;
}