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
	ll t;
	cin>>t;
	while(t--){
		ll n,r;
		cin>>n>>r;
		vi v1;
		ll min=0;
		ll mini=0;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v1.pb(a);
			if(i==0){
				min=v1[0];
			}
			else{
				if(a<min){
					min=a;
					mini=i;
				}
			}
		}
		ll mincb=0;
		ll maxcb=0;
		ll maxcbi=0;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			if(i==0){
				maxcb=a;
			}
			if(a>maxcb){
				maxcb=a;
				maxcbi=i;
			}
			if(i==mini){
				mincb=a;
			}

		}

		ll count1=0;
		for(int i=0;i>=0;i++){
			if(r<min){
				break;
			}
			else{
				ll x = r / min;
				count1=count1+x;
				r=r-(x*min)+(x*mincb);
			}
		}
		cout<<count1<<endl;
		cout<<"MIN "<<min<<" "<<mincb<<endl;
		cout<<"MAX "<<v1[maxcbi]<<" "<<maxcb<<endl; 
	}

	return 0;
}