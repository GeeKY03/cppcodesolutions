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
	ll n,k,m,t;
	cin>>n>>k>>m>>t;
	vector<pair<int,int>> v;
	for(int i=0;i<t;i++){
		ll a,b;
		cin>>a>>b;
		pair<int,int> p={a,b};
		v.pb(p);
	}
	for(auto x:v){
		if(x.first==1){
			n++;
			if(x.second>k){
				k+=0;
			}
			else{
				k++;
			}
		}
		else{
			if(x.second==k){
				k+=0;
				n=k;
			}
			else if(x.second>k){
				k+=0;
				n=n-(n-x.second);
			}
			else if(x.second<k){
				k=k-x.second;
				n=n-x.second;
			}
		}
		cout<<n<<" "<<k<<endl;
	}

	return 0;
}