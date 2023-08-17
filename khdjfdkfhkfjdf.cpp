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
		int n,a,b;
		cin>>n>>a>>b;
		ll suml=0;
		vi v1;
		ll min=0;
		for(int i=0;i<n;i++){
			ll c;
			cin>>c;
			min+=b*(c);
			v1.pb(c);
		}
		// ll min=(b*(v1[n-1]))+(a*(v1[n-1]));
		for(int i=n-2;i>=0;i--){
			ll sumc=0;
			ll u=b*(v1[i]);
			ll o=a*(v1[i]);
			ll add=0;
			for(int j=i;j<=n-2;j++){
				add+=b*(v1[j+1]-v1[i]);
			}
			sumc=u+o+add;
			if(i==n-2){
				suml=sumc;
			}
			else{
				if(sumc>=suml){
					break;
				}
				else{
					suml=sumc;
				}
			}
		}
		if(suml>min){
			if(min<0){
				cout<<suml<<endl;
			}
			else{
				cout<<min<<endl;
			}
		}
		else{
			if(suml<0){
				cout<<min<<endl;
			}
			else{
				cout<<suml<<endl;
			}
		}
	}

	return 0;
}