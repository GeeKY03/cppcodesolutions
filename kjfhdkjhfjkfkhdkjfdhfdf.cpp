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
		int n,r;
		cin>>n>>r;
		ll r1=r;
		ll r2=r;
		vi p;
		vi cb;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			p.pb(a);
		}
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			cb.pb(a);
		}
		// First min cost and then max cb of that min cost
		ll minc =*min_element(p.begin(),p.end());
		ll maxcb=0;
		for(int i=0;i<n;i++){
			if(p[i]==minc){
				if(maxcb<cb[i]){
					maxcb=cb[i];
				}
			}
		}
		// cout<<minc<<" "<<maxcb<<endl;


		// First max cb and then min cost of that maxcb
		ll mxcb=*max_element(cb.begin(),cb.end());
		ll mnc=2000000000;
		for(int i=0;i<n;i++){
			if(cb[i]==mxcb){
				if(mnc>p[i]){
					mnc=p[i];
				}
			}
		}
		// cout<<mnc<<" "<<mxcb<<endl;
		ll count1=0;
		for(int i=0;i>=0;i++){
			if(r1<minc){
				break;
			}
			else{
				ll x=r1/minc;
				count1=count1+x;
				r1=r1-(x*minc)+(x*maxcb);
			}
		}
		// cout<<count1<<endl;
		ll count2=0;
		for(int i=0;i>=0;i++){
			if(r2<mnc){
				break;
			}
			else{
				ll x=r2/mnc;
				count2+=x;
				r2=r2-(x*mnc)+(x*mxcb);
			}
		}
		for(int i=0;i>=0;i++){
			if(r2<minc){
				break;
			}
			else{
				ll x=r2/minc;
				count2+=x;
				r2=r2-(x*minc)+(x*maxcb);
			}
		}
		cout<<max(count1,count2)<<endl;
	}


	return 0;
}