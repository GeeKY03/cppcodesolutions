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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vlli v;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
		}
		int maxe=*max_element(v.begin(),v.end());
		ll count=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if((flag==0)&&(v[i]==maxe)){
				flag=1;
				continue;
			}
			else{
				count+=v[i];
			}
		}
		if(maxe==0){
			cout<<0<<endl;
		}
		else if(maxe<=count+1){
			cout<<1<<endl;
		}
		else{
			cout<<maxe-count<<endl;
		}
	}

	return 0;
}